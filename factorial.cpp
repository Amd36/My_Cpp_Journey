// This program computes the factorial of a number using recursion

#include <iostream>

using namespace std;

long long unsigned int factorial(int);

int main() {
    long long unsigned int n;

    cout << "Enter a natural number: ";
    cin >> n;

    cout << n << "! = " << factorial(n);
    
    return 0;
}

long long unsigned int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}