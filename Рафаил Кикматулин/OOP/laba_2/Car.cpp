#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Car {//virtual table 

private:
    const std::string m_make;//
    const std::string m_model;//

public:
    Car(const std::string& _make, const std::string& _model) : m_make(_make), m_model(_model) {}//

    virtual void print() const = 0;

    virtual ~Car() {
        std::cout << "Make: " << m_make << ", Model: " << m_model << std::endl;
    }

};

class Mercedes : public Car {
public:
    Mercedes(const std::string& _model) : Car("Mercedes", _model) {}//
    virtual void print() const { std::cout << "Mercedes" << std::endl; }
    virtual ~Mercedes() {}
};

class BMW : public Car {
public:
    BMW(const std::string& _model) : Car("BMW", _model) {}//
    virtual void print() const  { std::cout << "BMW" << std::endl; }
    virtual ~BMW() {}
};

class Toyota : public Car {
public:
    Toyota(const std::string& _model) : Car("Toyota", _model) {}//
    virtual void print() const  { std::cout << "Toyota" << std::endl; }
    virtual ~Toyota() {}
};

class Fort : public Car {
public:
    Fort(const std::string& _model) : Car("Fort", _model) {}//
    virtual void print() const  { std::cout << "Fort" << std::endl; }
    virtual ~Fort() {}
};

class Jigul : public Car {
public:
    Jigul(const std::string& _model) : Car("Jigul", _model) {}//
    virtual void print() const  { std::cout << "Jigul" << std::endl; }
    virtual ~Jigul() {}
};

int main() {

    std::ifstream  inFile("carslaba.txt");
    if (inFile.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    std::vector<Car*> cars;
    std::string make, model;
    while (inFile >> make >> model) {
        if (make == "Mercedes") {
            cars.push_back(new Mercedes(model));
        }
        else if (make == "BMW") {
            cars.push_back(new BMW(model));
        }
        else if (make == "Toyota") {
            cars.push_back(new Toyota(model));
        }
        else if (make == "Fort") {
            cars.push_back(new Fort(model));
        }
        else if (make == "Jigul") {
            cars.push_back(new Jigul(model));
        }
        else {
            std::cerr << "Unknown car make: " << make << std::endl;
            continue;
        }
    }

    inFile.close();

    for (Car* car : cars) {
        delete car;
    }

    return 0;
}

