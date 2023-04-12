#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <vector>
#include <string>

enum Type {
    art, tech
};


class Book {

public:

    Book(const std::string& _author, const std::string& _title, Type _bookType) {
        m_author = _author;
        m_title = _title;
        m_bookType = _bookType;
    }

    Type getType() const {
        return this->m_bookType;
    }

    virtual ~Book() { std::cout << "Object is delete"; }

private:
    std::string m_author;
    std::string m_title;
    Type m_bookType;

};

class Lib {

private:
    std::vector<Book> bookStorage;

public:
    void bookTypeCounterSwitch() {
        int artCounter = 0;
        int techCounter = 0;

        for (const Book& book : bookStorage) {
            switch (book.getType()) {
            case Type::art:
                ++artCounter;
                break;

            case Type::tech:
                ++techCounter;
                break;
            }
        }

        std::cout << "art: " << artCounter << std::endl;
        std::cout << "tech: " << techCounter << std::endl;
    }

    void bookTypeCounter() {
        int artCounter = 0;
        int techCounter = 0;

        for (const Book& book : bookStorage) {
            if (book.getType() == Type::art) {
                ++artCounter;
            }
            else {
                ++techCounter;
            }
        }

        std::cout << "art: " << artCounter << std::endl;
        std::cout << "tech: " << techCounter << std::endl;
    }

    void addBook(const std::string& title, const std::string& author, Type bookType) {
        if (title.empty() || author.empty()) {
            std::cout << "book is depricated. Enter title, author and overrided bookType" << std::endl;
        }
        else {
            bookStorage.emplace_back(title, author, bookType);
        }
    }
};




int main()
{
    Lib lib;

    std::vector<Book> myBookStorage;

    lib.addBook("qwerty", "asdfgh", art);
    lib.addBook("poiuyt", "lkhgf", tech);

    lib.addBook("qhqkj", "", art);
    lib.addBook("", "tjkfl", tech);

    std::cout << "End" << std::endl;




    return 0;
}
