//
//  HTMLViewQt.hpp
//  core
//
//  Created by 1m0nster on 2018/7/2.
//

#ifndef HTMLViewQt_hpp
#define HTMLViewQt_hpp

#include <stdio.h>
#include <QObject>
#include <functional>
#include "exportMacro.h"
#include "BookView.h"

class QWidget;
namespace future_core {
    class HTMLReader;
    class HTMLViewQt: public QObject, public BookView {
        
        Q_OBJECT
        
    public:
        ENGINE_EXPORT HTMLViewQt(QWidget *hostView);
        ENGINE_EXPORT void setHTMLReader(HTMLReader *reader);
        ENGINE_EXPORT void setUpdateViewCallback(const std::function<void()>&);
        ENGINE_EXPORT void onDraw();
        ENGINE_EXPORT void SetPaintSize(int width, int height) override;
        ENGINE_EXPORT void updateView();
        ENGINE_EXPORT float GetDensity() override;
        
    /* member variable */
    private:
        QWidget* m_hostView;
        HTMLReader* m_htmlReader;
        std::function<void(void)> m_updateViewCallback;
        
    private:
        void updateViewCallback();
        
    signals:
        void runFunctionOnMainthreadSignals(std::function<void(void)>);
        
    private slots:
        void callOnMainthread(std::function<void(void)>);
    };
}
#endif /* HTMLViewQt_hpp */
