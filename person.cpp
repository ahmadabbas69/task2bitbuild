#include <iostream>
using namespace std;

class person {
private:
    string name;
    int age;

public:
    

    // Method to display the information
    void display_information() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Method to input information from user
    void input_information() {
        cout << "Enter name: ";
        cin >> name;
        
        cout << "Enter age: ";
        cin >> age;
    }
};

int main() {
    person p1;
    
    // Input information from user
    p1.input_information();
    
    // Display the information
    p1.display_information();

    return 0;
}

