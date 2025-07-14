#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {5, 2, 9, 6, 3};
    make_heap(numbers.begin(), numbers.end()); // Create a max-heap

    // Access the largest element
    cout << "Largest element: " << numbers.front() << endl;

    // Remove the largest element
    pop_heap(numbers.begin(), numbers.end());  // Moves largest element to the end
    numbers.pop_back();                        // Removes the last element
    cout << "After removing largest element: " << numbers.front() << endl;

    return 0;
}
