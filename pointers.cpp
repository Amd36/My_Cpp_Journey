#include <iostream>
// #include <string>

using namespace std;

int main() {
    // Pointers with variables
    int var = 98;
    int var2 = 23;

    int* ptr_var = &var;

    cout << "Variable var is stored in the address: " << ptr_var << " and it's value is " << *ptr_var << endl;

    // Pointers with arrays
    int n;
    float arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i=0; i<n; ++i){
        cout << "Enter a float: ";
        cin >> arr[i];
    }

    float* ptr_arr = arr;

    for (int i=0; i<100; i++, ptr_arr++){
        if (*ptr_arr == '\0')
            break;
        
        cout << "Pointer for arr[" << i << "]: " << ptr_arr << endl;
        cout << "Value pointed by the pointer: " <<  *ptr_arr << endl;
        cout << endl;
    }

    return 0;
}