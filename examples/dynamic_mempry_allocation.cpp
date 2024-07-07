#include <iostream>

using namespace std;

void display (float gpa[], int size){
    cout << endl;
    cout << "Displaying the GPA of students: " << endl;
    for (int i=0; i<size; ++i){
        cout << "Student " << i+1 << ": " << gpa[i] << endl;
    }
}

int main() {
    // Dynamic memory for variables
    int* val = new int{43};

    cout << val << endl;
    cout << *val << endl;

    delete val;

    // Dynamic memory allocation for arrays
    int num;

    cout << "Enter the number of students: ";
    cin >> num;

    float* gpa_ptr;
    gpa_ptr = new float[num];

    cout << "Enter the GPA of students: " << endl;
    for (int i=0; i<num; ++i) {
        cout << "Student " << i+1 << ": ";
        cin >> *(gpa_ptr+i);
    }

    display(gpa_ptr, num);

    delete[] gpa_ptr;

    return 0;
}