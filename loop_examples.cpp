#include <iostream>

using namespace std;

int main() {
    // prints the num of n integers specified by user
    int n, sum=0;

    cout << "Enter any positive integer: ";
    cin >> n;

    for (int i=0; i<=n; ++i) {
        sum += i;
    }

    cout << "The sum of first " << n << " natural numbers = " << sum << endl;

    //Using range based loop
    sum = 0;
    int num_array[n];

    for (int i=0; i<n; ++i) {
        num_array[i] = i+1;
    }

    cout << "num_array: " << num_array << endl;
    
    for (int num : num_array) {
        sum+=num;
    }

    cout << "The sum of first " << n << " natural numbers = " << sum << endl;

    return 0;
}