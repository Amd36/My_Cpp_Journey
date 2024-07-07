#include <iostream>

using namespace std;

int main() {
    string city = "Dhaka";

    string& ref_city = city;

    cout << "Original Variable: " << city << endl;
    cout << "Reference variable: " << ref_city << endl;
    cout << endl;

    city = "Khulna";

    cout << "After changing the original variable: " << endl;
    cout << "Original Variable: " << city << endl;
    cout << "Reference variable: " << ref_city << endl;
    cout << endl;

    ref_city = "Dhaka";

    cout << "After changing the reference variable: " << endl;
    cout << "Original Variable: " << city << endl;
    cout << "Reference variable: " << ref_city << endl;
    cout << endl;

    cout << "After changing the reference to reference variable: " << endl;
    cout << "Original Variable: " << city << endl;
    cout << "Reference variable: " << ref_city << endl;
    cout << endl;

    // You cannot change the reference variable to refer to another varible after initialization

    return 0;
}