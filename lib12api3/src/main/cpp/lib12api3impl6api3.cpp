// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl6api34(int a, int b) {
    return a + b;
}

int Lib12Api3Impl6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl6Api3" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl6Impl lib12api3impl6impl;
        lib12api3impl6impl.doSomething();
        Lib12Api3Impl7Api1 lib12api3impl7api1;
        lib12api3impl7api1.doSomething();
        Lib12Api3Impl7Api2 lib12api3impl7api2;
        lib12api3impl7api2.doSomething();
        Lib12Api3Impl7Api3 lib12api3impl7api3;
        lib12api3impl7api3.doSomething();
        visited = 1;
    }
}

