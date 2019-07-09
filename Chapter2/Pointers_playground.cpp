#include <iostream>

int main() 
{
    int ival = 42;
    int *p = &ival;
    std::cout << *p << std::endl;   // outputs 42
    std::cout << p << std::endl;    // outputs memory address

    int *p1 = nullptr;              // equivalent to int *p1 = 0;
    int *p2 = 0;                    // directly initializes p2 from the literal constant 0
    // must include cstdlib
    int *p3 = NULL;                 // equivalent to int *p3 = 0;

    // It is illegal to assign an int variable to a pointer, evenif the variable's value is 0
    // It is important to initialize variables to avoid hard to detect runtime crashes.

    int i = 42;
    int *pi = 0;    // pi is initialized but addresses no object
    int *pi2 = &i;  // pi2 initialized to hold the address of i
    int *pi3 = pi2; // if pi3 is defined inside a block, pi3 is uninitialized
    pi3 = pi2;      // pi3 and pi2 address the same object, e.g., i
    pi2 = 0;        // pi2 now addresses no object

    // left hand operand is always the one that changes
    pi = &ival;     // value in pi is changed; pi now points to ival

    /*So long as the pointer has a valid value, we can use a pointer in a condition
    Just as when we use an arithmetic value in a condition, if the pointer is 0, then
    the condition is false */
    int ival1 = 1024;
    int *po = 0;        // po is a valid, null pointer
    int *po2 = &ival1;  // po2 is a valid pointer that hold the address of ival1

    if (po){
        return -1;
    }             // po has value 0, so condition evaluates as false

    if (po2){
        return 0;
    }            //po2 points to ival, so it is not 0; the condition evaluates as true

    /*

                                    ~void* Pointers~

    The type void* is a special pointer type that can hold the address of any object.
    Like any other pointer, a void* pointer holds an address, but the type of the object
    at that address is unknown.

     */
    double obj = 3.14, *pd = &obj;
    // ok: void* can hold the address value of any data pointer type
    void *pv = &obj;    // obj can be an object of any type
    pv = pd;            // pv can hold a pointer to any type

    /*
                                    ~Compound Type Declarations~
     */
    int n = 1024, *pn = &n, &r = n; 
}