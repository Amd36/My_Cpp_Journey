// This program shows the fibonacci series of n terms 

#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 1, n;

    cout << "Enter the number of terms: ";
    cin >> n;

    long long int fibonacci_array[n] = {0};

    fibonacci_array[0] = 0;
    fibonacci_array[1] = 1;

    for (int i=2; i<n; ++i) {
        fibonacci_array[i] = a + b;
        a = b;
        b = fibonacci_array[i];
    }

    cout << "The required fibonacci series of " << n << "terms is ";
    for (int n: fibonacci_array) {
        cout << n << ' ';
    }

    return 0;
}