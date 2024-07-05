#include <iostream>
using namespace std;

int main() {
    int x = 20;

    int lsft_result = x << 1;
    int rsft_result = x >> 1;

    cout << "left shifted " << x << " is " << lsft_result << endl;
    cout << "right shifted " << x << " is " << rsft_result << endl;
    
    return 0;
}