#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <vector>
#include <string>

using namespace std;//

enum Type {
    art, tech, override
};


class Book {

public:

    Book(const string& _author, const string& _title, Type _bookType) {//const ref
        m_author = _author;
        m_title = _title;
        m_bookType = _bookType;
    }

    Type getType() const {//get const
        return this->m_bookType;
    }

    virtual ~Book() { }

private:
    string m_author;
    string m_title;
    Type m_bookType;

};

class Lib {
public:
    void bookTypeCounterSwitch(const vector<Book>& v) {
        int artCounter = 0;
        int techCounter = 0;

        for (auto i : v) {//foreach
            switch (i.getType()) {
            case Type::art:
                artCounter++;
                break;

            case Type::tech:
                techCounter++;
                break;
            }
        }

        cout << "art: " << artCounter << endl;
        cout << "tech: " << techCounter << endl;
    }

    void bookTypeCounter(vector<Book>& v) {
        int artCounter = 0;
        int techCounter = 0;

        for (Book i : v) {
            if (i.getType() == Type::art) {
                artCounter++;
            }
            else {
                techCounter++;
            }
        }

        cout << "art: " << artCounter << endl;
        cout << "tech: " << techCounter << endl;
    }

    void addBook(const string& title, const string& author, const Type bookType) {
        if (title.length() == 0 || author.length() == 0 || bookType == override) {
            cout << "book is depricated. Enter title, author and overrided bookType" << endl;
        }
        else {
            v.emplace_back(title, author, bookType);
        }
    }

private:
    vector<Book> v;
};




int main()
{
    Lib lib;

    vector<Book> v;

    v.emplace_back("author1", "titlr1", Type::art);
    v.emplace_back("author2", "titlr2", Type::art);
    v.emplace_back("author3", "titlr3", Type::art);
    v.emplace_back("author4", "titlr4", Type::art);
    v.emplace_back("author5", "titlr5", Type::tech);
    v.emplace_back("author6", "titlr6", Type::tech);
    v.emplace_back("author7", "titlr7", Type::tech);
    v.emplace_back("author8", "titlr8", Type::tech);

    lib.bookTypeCounterSwitch(v);

    lib.bookTypeCounter(v);
    
    std::cout << "End" << std::endl;




    return 0;
}
