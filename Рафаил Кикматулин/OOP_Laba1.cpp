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

    virtual ~Book() { }

private:
    std::string m_author;
    std::string m_title;
    Type m_bookType;

};

class Lib {
public:
    void bookTypeCounterSwitch() {
        int artCounter = 0;
        int techCounter = 0;

        for (Book i : bookStorage) {
            switch (i.getType()) {
            case Type::art:
                artCounter++;
                break;

            case Type::tech:
                techCounter++;
                break;
            }
        }

        std::cout << "art: " << artCounter << std::endl;
        std::cout << "tech: " << techCounter << std::endl;
    }

    void bookTypeCounter() {
        int artCounter = 0;
        int techCounter = 0;

        for (Book i : bookStorage) {//memory
            if (i.getType() == Type::art) {
                artCounter++;//postfix/prefix
            }
            else {
                techCounter++;
            }
        }

        std::cout << "art: " << artCounter << std::endl;
        std::cout << "tech: " << techCounter << std::endl;
    }

    void addBook(const std::string& title, const std::string& author, Type bookType) {
        if (title.length() == 0 || author.length() == 0) {//empty
            std::cout << "book is depricated. Enter title, author and overrided bookType" << std::endl;
        }
        else {
            bookStorage.emplace_back(title, author, bookType);
        }
    }

private:
    std::vector<Book> bookStorage;
};




int main()
{
    Lib lib;

    std::vector<Book> myBookStorage;

    lib.addBook("qwerty", "asdfgh", art);
    lib.addBook("poiuyt", "lkhgf", tech);

    lib.addBook("qhqkj", "", art);
    lib.addBook("", "tjkfl", tech);

    //lib.bookTypeCounterSwitch(book1);

    //lib.bookTypeCounter(book1);
    
    std::cout << "End" << std::endl;




    return 0;
}
