// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl5api34(int a, int b) {
    return a + b;
}

int Lib3Core1Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl5Api3" << std::endl;
        Lib3Core1Impl5Impl lib3core1impl5impl;
        lib3core1impl5impl.doSomething();
        Lib3Core1Impl6Api1 lib3core1impl6api1;
        lib3core1impl6api1.doSomething();
        Lib3Core1Impl6Api2 lib3core1impl6api2;
        lib3core1impl6api2.doSomething();
        Lib3Core1Impl6Api3 lib3core1impl6api3;
        lib3core1impl6api3.doSomething();
        visited = 1;
    }
}

