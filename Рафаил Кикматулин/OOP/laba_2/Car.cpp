#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Car {

private:
    string make;
    string model;

public:
    Car(string _make, string _model) : make(_make), model(_model) {}

    virtual ~Car() {
        cout << "Make: " << make << ", Model: " << model << endl;
    }

};

class Mercedes : public Car {
public:
    Mercedes(string _model) : Car("Mercedes", _model) {}

    virtual ~Mercedes() {}
};

class BMW : public Car {
public:
    BMW(string _model) : Car("BMW", _model) {}

    virtual ~BMW() {}
};

class Toyota : public Car {
public:
    Toyota(string _model) : Car("Toyota", _model) {}

    virtual ~Toyota() {}
};

class Fort : public Car {
public:
    Fort(string _model) : Car("Fort", _model) {}

    virtual ~Fort() {}
};

class Jigul : public Car {
public:
    Jigul(string _model) : Car("Jigul", _model) {}

    virtual ~Jigul() {}
};

int main() {

    ifstream  inFile("carslaba.txt");
    if (inFile.fail()) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    vector<Car*> cars;
    string make, model;
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
            cerr << "Unknown car make: " << make << endl;
            continue;
        }
    }

    inFile.close();

    for (Car* car : cars) {
        delete car;
    }

    return 0;
}

