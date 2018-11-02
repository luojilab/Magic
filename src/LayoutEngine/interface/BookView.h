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

        virtual void SetPaintSize(int width, int height) = 0;

        virtual int GetWidth();

        virtual int GetHeight();

        virtual float GetDensity() = 0;

    protected:
        virtual ~BookView();

        virtual void UrlOpened(const std::string &);

        virtual void ViewOnClicked(int x, int y,
                                   const std::string &id, int offset);

        virtual void AllViewUpdated(int code);

        virtual void VisibleViewUpdated(future_core::HighlightInfo &highlightInfo);

        virtual void
        ImageOnClicked(WebCore::NativeImagePtr, int, int, int, int);

    protected:
        future_core::BookReader *m_BookReader;
        float m_Density;
        int m_Width;
        int m_Height;
    };
}

#endif //LOOKER_BOOKVIEW_H
