// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl4api14(int a, int b) {
    return a + b;
}

int Lib3Core2Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl4Api1" << std::endl;
        Lib3Core2Impl5Api1 lib3core2impl5api1;
        lib3core2impl5api1.doSomething();
        Lib3Core2Impl4Impl lib3core2impl4impl;
        lib3core2impl4impl.doSomething();
        Lib3Core2Impl5Api2 lib3core2impl5api2;
        lib3core2impl5api2.doSomething();
        Lib3Core2Impl5Api3 lib3core2impl5api3;
        lib3core2impl5api3.doSomething();
        visited = 1;
    }
}

