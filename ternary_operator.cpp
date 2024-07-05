// This program illustrates the working of ternary operator

#include <iostream>
#include <string>

using namespace std;

int main() {
    int marks;

    cout << "Enter the marks: ";
    cin >> marks;

    string result = (marks>40) ? "passed" : "failed";

    cout << "You " << result << endl;

    //nested ternary operator
    int num;

    cout << "Enter any number: ";
    cin >> num;

    string type = (num == 0) ? "zero" : ((num<0) ? "negative" : "positive");

    cout << num << " is " << type;
    
    return 0;
}