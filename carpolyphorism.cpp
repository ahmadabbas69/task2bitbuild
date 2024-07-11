#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    // Virtual function
    virtual void startEngine() {
        cout << "Starting vehicle engine..." << endl;
    }
    
    // Virtual destructor
    virtual ~Vehicle() {}
};

// Derived class
class Car : public Vehicle {
public:
    // Override the virtual function
    void startEngine() override {
        cout << "Starting car engine..." << endl;
    }
};

int main() {
    // Create a Car object
    Car myCar;

    // Create a Vehicle pointer to the Car object
    Vehicle* vehiclePtr = &myCar;

    // Call the overridden method using the base class pointer
    vehiclePtr->startEngine();

    return 0;
}

