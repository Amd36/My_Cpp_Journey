// This program takes a bunch of numbers from users as string and returns the sum after converting into integer

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int get_sum(const vector<int>& nums);

int main() {
    vector<int> numbers;
    string input;

    cout << "Enter some numbers separated by spaces: ";
    getline(cin, input);

    stringstream ss(input);
    string temp;
    while (ss >> temp) {
        try {
            int num = stoi(temp);
            numbers.push_back(num);
        } catch (const invalid_argument& e) {
            cout << "Invalid input detected, skipping: " << temp << endl;
        }
    }

    cout << "\nTheir Sum = " << get_sum(numbers) << endl;

    return 0;
}

int get_sum(const vector<int>& nums) {
    int sum = 0;
    for (const int& n : nums) {
        sum += n;
    }
    return sum;
}
