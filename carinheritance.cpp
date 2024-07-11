#include<iostream>
using namespace std;

class car {
    private:
        string name;
        int model;
        string color;

    public:
        void set_data(string n, int m, string c) {
            name = n;
            model = m;
            color = c;
        }

        string get_name() {
            return name;
        }

        int get_model() {
            return model;
        }

        string get_color() {
            return color;
        }
};

class vehicle: public car {
    public:
        int doors;
        int number;

        void set_data(string n, int m, string c, int d, int num) {
            car::set_data(n, m, c);  // Call base class method to set name, model, and color
            doors = d;
            number = num;
        }

        void get_data() {
            cout << "Name: " << get_name() << endl;
            cout << "Model: " << get_model() << endl;
            cout << "Color: " << get_color() << endl;
            cout << "Doors: " << doors << endl;
            cout << "Number: " << number << endl;
        }
};

int main() {
    vehicle c1;

    string name, color;
    int model, doors, number;
     cout<<"\t<-----Please enter the inforamtion of car---->"<<endl;
    // Taking inputs from the user
    cout << "Enter car name: ";
    getline(cin, name);  // Use getline to handle spaces in the name

    cout << "Enter car model: ";
    cin >> model;
    cin.ignore();  // Ignore the newline character left in the input buffer

    cout << "Enter car color: ";
    getline(cin, color);  // Use getline to handle spaces in the color

    cout << "Enter number of doors: ";
    cin >> doors;

    cout << "Enter number of cars: ";
    cin >> number;

    // Setting data
    c1.set_data(name, model, color, doors, number);

    // Displaying data
    c1.get_data();  // Call the get_data method to print the information

    return 0;
}

