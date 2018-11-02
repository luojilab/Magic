//
//  BookViewCore.hpp
//  Sigil
//
//  Created by 1m0nster on 2018/6/25.
//

#ifndef BookViewManager_hpp
#define BookViewManager_hpp

#include <stdio.h>
#include <functional>
#include "BookReader.h"
#include "exportMacro.h"
#include "BookView.h"
#include <QObject>

class QWidget;

namespace future_core {
    
    class BookViewQt: public QObject, public BookView {
        
        Q_OBJECT
        
    public:
        ENGINE_EXPORT explicit  BookViewQt(QWidget *hostView);
        ENGINE_EXPORT void      setUpdateViewCallback(std::function<void()>);
        ENGINE_EXPORT void      onDraw();
        ENGINE_EXPORT void      SetPaintSize(int width, int height) override;
        ENGINE_EXPORT float     GetDensity() override;
        ENGINE_EXPORT void      UpdateView(int code);
        
    protected:
        void AllViewUpdated(int code) override;
        void ViewOnClicked(int x, int y, const std::string &id, int offset) override;
        void VisibleViewUpdated(future_core::HighlightInfo &highlightInfo) override;
        
    private:
        QWidget *m_hostView{ NULL };
        std::function<void()>m_updateViewCallback;
        
    signals:
        void runOnMainthreadSignals(std::function<void(void)>);
        
    private slots:
        void callOnMainthread(std::function<void(void)>);
    };
}
#endif /* BookViewCore_hpp */
