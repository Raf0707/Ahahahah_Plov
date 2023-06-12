#include <crtdbg.h>
#include <iostream>  
#include <fstream>  
#include <string>  
#include <vector>  
#include <sstream>  
#include <algorithm>
struct Leaks {
    ~Leaks() { _CrtDumpMemoryLeaks(); }
}_l;

class Employee {
private:
    const std::string _name;
    const int _yearOfBirth;
    const std::string _position;
    int _groupNumber;
public:
    Employee(const std::string& n, const int& y, const std::string& p, const int& g) : _name(n), _yearOfBirth(y), _position(p), _groupNumber(g) {}

    int getBirthYear() const {
        return _yearOfBirth;
    }
    std::string getPosition() const {
        return _position;
    }
    void printInfo() const {
        std::cout << _name << ", " << _yearOfBirth << ", " << _position << ", " << "группа " << _groupNumber << std::endl;
        std::cout << std::endl;
    }
};

class Database {
private:
    std::vector<Employee*> employees;
public:
    void addEmployee(Employee* e) {
        employees.push_back(e);
    }

    void printAllEmployees() const {
        for (const auto& employee : employees) {
            employee->printInfo();
        }
    }

    void printAllEngineers() const {
        std::for_each(employees.begin(), employees.end(), [](const Employee* e) {
            if (e->getPosition() == "инженер") {
                e->printInfo();
            }
            });
    }
    void printAllNonPresidents() const {
        std::vector<Employee*> nonPresidents;
        for (const auto& employee : employees) {
            if (employee->getPosition() != "председатель") {
                nonPresidents.push_back(employee);
            }
        }
        std::sort(nonPresidents.begin(), nonPresidents.end(), [](const Employee* a, const Employee* b) {
            return a->getBirthYear() < b->getBirthYear();
            });

        for (const auto& employee : nonPresidents) {
            employee->printInfo();
        }
    }
    ~Database() {
        for (const auto& employee : employees) {
            delete employee;
        }
    }
};
int main() {
    setlocale(LC_ALL, "RUS");
    Database db;
    std::string _name, _position, _group;
    int _yearOfBirth, _groupNumber;
    std::string path = "bd.txt";
    std::ifstream file;
    file.open(path);
    if (!file.is_open()) {
        std::cout << "Error" << std::endl;
    }
    else
    {
        std::cout << "Open!" << std::endl;
        std::string line;
        while (getline(file, line)) {
            std::stringstream ss(line);
            getline(ss, _name, ',');
            ss >> _yearOfBirth >> std::ws;
            getline(ss, _position, ',');
            ss >> _group >> std::ws;
            ss >> _groupNumber;
            Employee* e = new Employee(_name, _yearOfBirth, _position, _groupNumber);
            db.addEmployee(e);
        }
        file.close();
    }
    std::cout << "Общая база данных:" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    db.printAllEmployees();
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Информация об инженерах:" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    db.printAllEngineers();
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Информация о всех не председателях:" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    db.printAllNonPresidents();
    return 0;
}
