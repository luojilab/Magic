#pragma once
namespace future_core {
	class BookChapter {
	public:
		const int GetPageCount() const;
		int GetPageIndex(int);
		int GetBeginHtmlOffset(int, std::string &);
	};
}