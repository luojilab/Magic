#ifndef BookReader_DEF
#define BookReader_DEF
#include <QWidget>
#include <functional>
#include "BookChapter.h"
typedef QWidget* PlatformWidget;
namespace future_core {
	// forward class
	class TTsReader;
	class NavPoint;
	class BookModel;
	class Book;
	class File;
	class IdPoint;
	class EncryptionMap;

	// EncryptInfo
	typedef struct EncryptInfoStruct {
		int ret;
		int version = 1;
		unsigned char *data = nullptr;
		int dataLen = 0;
	}EncryptInfo;

	class TextReader {
	public:
		void GotoFirstPage();
		void GotoNextPage();
		void GotoPreviousPage();
		void GotoNextChapter();
		void GotoPreviousChapter();
		void SetIsNightTime(bool isNightTime);
		int GetCurrentPageOffset();
		const std::string &GetCurrentChapterId();
		const std::string GetChapterNameById(std::string &chapterId);
		const std::string GetChapterFileNameById(const std::string& chapterId);
        void SetAllViewUpdateCallBack(std::function<void(void)> callBack);
	};

	/*
		BookModel Interface
	*/
	class BookModel {

	public:
		BookModel(const std::shared_ptr<future_core::Book> book);

		~BookModel();

		const File &GetBookFile() const;

		void SetIdPoints(const std::vector<IdPoint> &idPoints);

		void SetOEBPSPath(const std::string &path);

		void SetNaviMap(const std::map<int, NavPoint> &naviMap);

		const std::map<int, NavPoint> &GetNaviMap() const;

		void SetEncryptionMap(std::shared_ptr<EncryptionMap> encryptionMap) {
			m_EncryptionMap = encryptionMap;
		}

		EncryptInfo &GetEncryptInfo();

	private:

		void GenerateChapter();

	private:

		const std::shared_ptr<future_core::Book> m_Book;

	protected:
		std::vector<IdPoint> m_IdPoints;
		std::vector<BookChapter *> m_HtmlChapters;

		std::map<int, NavPoint> m_NavigationMap;
		std::map<std::string, BookChapter *> m_IdToChapter;
		std::map<std::string, BookChapter *> m_HrefToChapter;

		std::string m_oebpsPath;

		std::shared_ptr<EncryptionMap> m_EncryptionMap;

		friend class BookReader;
		friend class TextReader;
		friend class TTsReader;
	};

	/*
	 * BookReader Interface
	 */
	class BookReader {
	public:
		static void Build(PlatformWidget platformView, const std::shared_ptr<BookModel> bookModel, std::function<void(BookReader *)> callBack);

		void Destroy();

		TextReader *GetTextReader() {
			return m_TextReader;
		}

		TTsReader *GetTTsReader() {
			return m_TTsReader;
		}

		const std::map<int, NavPoint> &GetNaviMap() const {
			return m_BookModel->m_NavigationMap;
		};
	private:
		BookReader(PlatformWidget platformView, const std::shared_ptr<BookModel>);
		~BookReader();

		PlatformWidget m_PlatformWidget;
		TextReader *m_TextReader;
		TTsReader *m_TTsReader;
		const std::shared_ptr<BookModel> m_BookModel;
	};
}

#endif // !
