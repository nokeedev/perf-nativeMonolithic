// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl3api34(int a, int b) {
    return a + b;
}

int Lib6Api3Impl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl3Api3" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl3Impl lib6api3impl3impl;
        lib6api3impl3impl.doSomething();
        Lib6Api3Impl4Api1 lib6api3impl4api1;
        lib6api3impl4api1.doSomething();
        Lib6Api3Impl4Api2 lib6api3impl4api2;
        lib6api3impl4api2.doSomething();
        Lib6Api3Impl4Api3 lib6api3impl4api3;
        lib6api3impl4api3.doSomething();
        visited = 1;
    }
}
