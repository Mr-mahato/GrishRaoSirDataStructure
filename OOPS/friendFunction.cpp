#include <iostream>

class ClassB; // Forward declaration

class ClassA {
private:
    int privateDataA;

public:
    ClassA(int value) : privateDataA(value) {}

    // Declaration of a friend function from another class
    friend void accessPrivateDataA(const ClassA& objA, const ClassB& objB);
};

class ClassB {
private:
    int privateDataB;

public:
    ClassB(int value) : privateDataB(value) {}

    // Member function of ClassB is a friend of ClassA
    friend void accessPrivateDataA(const ClassA& objA, const ClassB& objB) ;
};
void accessPrivateDataA(const ClassA & objA , const ClassB &objB)
    {
        std::cout << "Accessing privateDataA from ClassA: " << objA.privateDataA << std::endl;
        std::cout << "Accessing privateDataB from ClassB: " << objB.privateDataB << std::endl;
    }


int main() {
    ClassA objA(42);
    ClassB objB(99);

    // Call the friend function from ClassB, which is a friend of ClassA
    accessPrivateDataA(objA, objB);

    return 0;
}
