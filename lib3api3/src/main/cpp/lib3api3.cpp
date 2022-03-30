// GENERATED SOURCE FILE

#include "lib3api3_impl.h"
#include "lib3api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api34(int a, int b) {
    return a + b;
}

int Lib3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api3" << std::endl;
        Lib3Api3Impl1Api1 lib3api3impl1api1;
        lib3api3impl1api1.doSomething();
        Lib3Api3Impl1Api2 lib3api3impl1api2;
        lib3api3impl1api2.doSomething();
        Lib3Api3Impl1Api3 lib3api3impl1api3;
        lib3api3impl1api3.doSomething();
        visited = 1;
    }
}

