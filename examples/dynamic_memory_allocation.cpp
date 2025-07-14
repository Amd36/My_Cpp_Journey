// In this program we will allocate memory dynamically and then delete it after our program has executed

#include <iostream>
#include <string>
using namespace std;

struct student_data {
    string name;
    int marks;
    float gpa;
};

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    student_data* ptr = new student_data[num];

    for (int i=0; i<num; ++i) {
        cout << "Enter the name of student [" << i+1 << "]:";
        cin.ignore();
        getline(cin, (ptr + i)->name);

        cout << "Enter the marks: ";
        cin >> (ptr + i)->marks;
        
        (ptr+i)->gpa = static_cast<float>((ptr+i)->marks)/100*5.00;
    }

    cout << "\nDisplaying corresponding GPA of each student: \n\n";

    for (int i=0; i<num; ++i){
        cout << (ptr + i)->name << ": " << (ptr + i)->gpa << endl;
    }

    delete[] ptr;
    ptr = nullptr;

    return 0;
}