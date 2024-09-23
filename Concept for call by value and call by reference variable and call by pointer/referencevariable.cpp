#include <iostream>

int& getStaticVariable(int &b) {
    int x = 10;
    b=x;  // Static variable, lives for the lifetime of the program
    return b;  // Return a reference to the static variable
}

int main() {
    int ref=9;
    getStaticVariable(ref)=56;  // Get a reference to the static variable
    // std::cout << ref << std::endl;   // Output: 10

    // ref = 20;  // Modify the static variable through the reference
    std::cout << ref << std::endl;  // Output: 20

    return 0;
}
