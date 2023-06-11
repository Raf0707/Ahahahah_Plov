#include <string>
#include <iostream>
#include <vector>
#include <list>
#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h> 
struct Leaks {
    ~Leaks() { _CrtDumpMemoryLeaks(); }
}_l;

class A {
public:
    std::string s;

    A() {
        std::cout << "Конструктор по умолчанию класса A" << std::endl;
    }

    A(const char* a) : s(a) {
        std::cout << "Пользовательский конструктор класса A" << std::endl;
        std::cout << s << std::endl;
    }

    virtual A* clone() const {
        return new A(*this);
    }

    virtual ~A() {
        std::cout << "Деструктор класса A" << std::endl;
        std::cout << typeid(*this).name() << std::endl;
    }
};

class B : public A {
public:
    B() {
        std::cout << "Конструктор класса B" << std::endl;
    }

    B(const char* a) : A(a) {
        std::cout << "Пользовательский конструктор класса B" << std::endl;
        std::cout << a << std::endl;
    }

    virtual B* clone() const {
        return new B(*this);
    }

    ~B() {
        std::cout << "Деструктор класса B" << std::endl;
        std::cout << typeid(*this).name() << std::endl;
    }
};


template<class T>
void del(T& v) {
    for (auto it = v.begin(); it != v.end(); ++it)
        delete* it;
    v.clear();
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::list<A*> l;
    l.push_back(new A("first"));
    l.push_back(new B("second"));

    std::vector<A*> v;
    for (auto it = l.begin(); it != l.end(); ++it) {
        v.push_back((*it)->clone());
    }

    del(v); 
    del(l);
    return 0;
}
