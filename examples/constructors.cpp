#include <iostream>

using namespace std;

class Wall {
    private:
        double length;
        double height;

    public:
        //initialize a constructor with parameters
        Wall(double length, double height) 
            : length{length}, height{height} {
                cout << "A wall is created with the dimensions " << length << "m x " << height << 'm' << endl;
            }

        void print_length() {
            cout << "Length of the wall: " << length << endl;
        }

        double calculate_area() {
            return length*height;
        }
};

int main() {
    Wall wall1(5.24, 7.82);
    
    //copies the contents of wall1 to another instance of Wall class
    Wall wall2 = wall1;

    cout << "Area of wall1: " << wall1.calculate_area() << " sqm" << endl;
    cout << "Area of wall2: " << wall2.calculate_area() << " sqm" << endl;

    return 0;
}