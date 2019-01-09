//
//  SplitChecker.cpp
//  Magic
//
//  Created by 1m0nster on 2019/1/9.
//

#include "SplitChecker.hpp"
#include "GumboInterface.h"
#include <map>
#include <QFile>
#include <QFileInfo>

const float S_UP_SCALE = 0.5;

SplitChecker::SplitChecker() {}
SplitChecker::~SplitChecker() {}

SplitChecker::SplitCheckResult SplitChecker::Check(const QList<HTMLResource *> &htmls, float scale) {
    SplitCheckResult rt;
    if (scale <= 0 || scale >=1 || htmls.empty()) {
        rt.errorCode = SplitError::ParamentError;
        return rt;
    }
    std::int64_t totalLength = 0;
    std::map<const HTMLResource *, std::int64_t> textRecord;
    for (const HTMLResource* html : htmls) {
        if (!html) {
            continue;
        }
        QFile f(html->GetFullPath());
        if (!f.open(QFile::ReadOnly)) {
            continue;
        }
        QString source = f.readAll();
        if (source.isEmpty()) {
            continue;
        }
        GumboInterface gi(source, "2.0");
        std::int64_t textcnt = gi.get_html_text_count();
        textRecord[html] = textcnt;
        totalLength += textcnt;
    }
    std::int64_t bottomTextCnt = totalLength * 0.1;
    std::int64_t tempTextCnt = 0;
    HTMLResource* bottomHTML = nullptr;
    for (const HTMLResource* html : htmls) {
        if (bottomTextCnt > tempTextCnt) {
            tempTextCnt += textRecord[html];
            bottomHTML = const_cast<HTMLResource *>(html);
            continue;
        }
        break;
    }
    if (float(tempTextCnt) / totalLength >= S_UP_SCALE) {
        rt.errorCode = SplitError::NotEnoughHTML;
        rt.info = QFileInfo(bottomHTML->GetFullPath()).fileName().toStdString();
    }
#ifdef Q_OS_MAC
    return rt;
#else
    return std::move(rt);
#endif
}
