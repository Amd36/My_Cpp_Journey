#include <iostream>
#include <string>

using namespace std;

class Base {
    private:
        int private_var = 5;

    protected:
        int protected_var = 9;

    public:
        int public_var = 10;

        int get_var() {
            return private_var;
        }
};

class Private_derived : private Base {
    public:
        int get_var() {
            return protected_var;
        }
};

class Protected_derived : protected Base {
    public:
        int get_var() {
            return protected_var;
        }
};

class Public_derived : public Base {
    public:
        int get_var() {
            return protected_var;
        }
};

int main() {
    Base obj0;
    Public_derived obj1;
    Protected_derived obj2;

    cout << obj0.get_var() << endl;
    cout << obj1.public_var << endl;
    // cout << obj2.public_var << endl;     error because the public members of base class is inherited as protected members and are not directly accessible anymore
    
    return 0;
}