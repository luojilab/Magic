//
// Created by bingjian on 2018/6/27.
//

#ifndef LOOKER_BOOKVIEW_H
#define LOOKER_BOOKVIEW_H

#include <string>

class QImage;
namespace WebCore {
    typedef QImage* NativeImagePtr;
}
class BookViewParameter {
public:
    BookViewParameter()
    : width(0)
    , height (0)
    , marginTop(0)
    , marginBottom(0) {}
    
    void SetInvalid() {
        width = -1;
        height = -1;
        marginTop = -1;
        marginBottom = -1;
    }

    int width;
    int height;
    int marginTop;
    int marginBottom;
};

namespace future_core {
    class BookReader;
    typedef struct _HighlightInfo HighlightInfo;
    class BookView {
    public:
        BookView();

        static void Destroy(BookView *bookView);

        virtual void SetBookReader(future_core::BookReader *bookReader);

        virtual void ClearBookReader();

        void UpdateView(int code);

        virtual void SetPaintSize(int width, int height);   //need call in override.
        virtual void SetViewTopMargin(int topMargin);   //need call in override.
        virtual void SetViewBottomMargin(int bottomMargin); //need call in override.
        
        virtual int GetWidth();

        virtual int GetHeight();

        virtual float GetDensity() = 0;

        void UseBeforeSettingParameter();
        void UseNormalParameter();
        void ClearSavedParameter();
        
    protected:
        virtual ~BookView();

        virtual void UrlOpened(const std::string &);

        virtual void ViewOnClicked(int x, int y,
                                   const std::string &id, int offset);

        virtual void AllViewUpdated(int code);

        virtual void VisibleViewUpdated(future_core::HighlightInfo &highlightInfo);

        virtual void
        ImageOnClicked(WebCore::NativeImagePtr, int, int, int, int);

        virtual void
        NoteImageOnClicked(const std::string &altStr,
                           int x,
                           int y,
                           int width,
                           int height);
        
    protected:
        future_core::BookReader *m_BookReader;
        float m_Density;

        BookViewParameter m_Param;
        BookViewParameter m_BeforeSettingParam;
    };
}

#endif //LOOKER_BOOKVIEW_H
