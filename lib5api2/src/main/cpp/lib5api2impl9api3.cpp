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
int lib5api2impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl9api34(int a, int b) {
    return a + b;
}

int Lib5Api2Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl9Api3" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl9Impl lib5api2impl9impl;
        lib5api2impl9impl.doSomething();
        Lib5Api2Impl10Api1 lib5api2impl10api1;
        lib5api2impl10api1.doSomething();
        Lib5Api2Impl10Api2 lib5api2impl10api2;
        lib5api2impl10api2.doSomething();
        Lib5Api2Impl10Api3 lib5api2impl10api3;
        lib5api2impl10api3.doSomething();
        visited = 1;
    }
}
