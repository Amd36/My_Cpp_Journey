#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand{"BMW"};
    int weight{200}; // Weight in tons
    string model{"M3"};

public:
    // Constructor with all parameters
    Car(string brand, string model, int weight) :
        brand{brand}, model{model}, weight{weight} {
        cout << "\nA new car has been created!" << endl;
        cout << "Given information: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Weight: " << weight << " ton" << endl;
    }

    // Constructor with brand and model, default weight
    Car(string brand, string model) :
        brand{brand}, model{model} {
        cout << "\nA new car has been created!" << endl;
        cout << "Given information: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Weight: " << weight << " ton (default)" << endl;
    }

    // Constructor with brand only, default model and weight
    Car(string brand) :
        brand{brand} {
        cout << "\nA new car has been created!" << endl;
        cout << "Given information: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << " (default)" << endl;
        cout << "Weight: " << weight << " ton (default)" << endl;
    }

    // Default constructor with all default values
    Car() {
        cout << "\nA new car has been created!" << endl;
        cout << "Given information: " << endl;
        cout << "Brand: " << brand << " (default)" << endl;
        cout << "Model: " << model << " (default)" << endl;
        cout << "Weight: " << weight << " ton (default)" << endl;
    }
};


int main() {
    Car car1("Audi", "R8", 180);
    Car car2("Ford", "Mustang GT");
    Car car3("Ferrari");
    Car car4;
    
    return 0;
}