// GENERATED SOURCE FILE

#include "lib12api3_impl.h"
#include "lib12api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api34(int a, int b) {
    return a + b;
}

int Lib12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3" << std::endl;
        Lib12Api3Impl1Api1 lib12api3impl1api1;
        lib12api3impl1api1.doSomething();
        Lib12Api3Impl1Api2 lib12api3impl1api2;
        lib12api3impl1api2.doSomething();
        Lib12Api3Impl1Api3 lib12api3impl1api3;
        lib12api3impl1api3.doSomething();
        visited = 1;
    }
}

