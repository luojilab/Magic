#ifndef BookReader_DEF
#define BookReader_DEF
namespace future_core {
	class TextReader {
	public:
		void GotoFirstPage();
		void GotoNextPage();
		void GotoPreviousPage();
		void GotoNextChapter();
		void GotoPreviousChapter();
	};
	class BookReader {
	public:
		TextReader *GetTextReader() {
			return m_TextReader;
		};
	private:
		TextReader *m_TextReader;
	};
}

#endif // !