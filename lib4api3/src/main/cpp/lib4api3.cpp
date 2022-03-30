// GENERATED SOURCE FILE

#include "lib4api3_impl.h"
#include "lib4api3_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api34(int a, int b) {
    return a + b;
}

int Lib4Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3" << std::endl;
        Lib4Api3Impl1Api1 lib4api3impl1api1;
        lib4api3impl1api1.doSomething();
        Lib4Api3Impl1Api2 lib4api3impl1api2;
        lib4api3impl1api2.doSomething();
        Lib4Api3Impl1Api3 lib4api3impl1api3;
        lib4api3impl1api3.doSomething();
        visited = 1;
    }
}

