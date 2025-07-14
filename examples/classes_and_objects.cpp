#include <iostream>

using namespace std;

//create a class
class Room {
    public:
        double length;
        double breadth;
        double height;

        double calculate_area() {
            return length*breadth;
        }

        double calculate_volume() {
            return length*breadth*height;
        }
};

int main() {
    
    //create an instance
    Room room1;

    //assign values to data members
    room1.length = 10.2;
    room1.breadth = 5.75;
    room1.height = 12.5;

    //calculate area and volume
    cout << "Area of the room: " << room1.calculate_area() << endl;
    cout << "Volume of the room: " << room1.calculate_volume() << endl;
    
    return 0;
}