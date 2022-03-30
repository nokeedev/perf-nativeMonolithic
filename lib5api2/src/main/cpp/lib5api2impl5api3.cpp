// GENERATED SOURCE FILE

#include "lib5api2_private.h"
#include "lib5api2_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api2impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl5api34(int a, int b) {
    return a + b;
}

int Lib5Api2Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl5Api3" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl5Impl lib5api2impl5impl;
        lib5api2impl5impl.doSomething();
        Lib5Api2Impl6Api1 lib5api2impl6api1;
        lib5api2impl6api1.doSomething();
        Lib5Api2Impl6Api2 lib5api2impl6api2;
        lib5api2impl6api2.doSomething();
        Lib5Api2Impl6Api3 lib5api2impl6api3;
        lib5api2impl6api3.doSomething();
        visited = 1;
    }
}

