// GENERATED SOURCE FILE

#include "lib9api2_private.h"
#include "lib9api2_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl19api24(int a, int b) {
    return a + b;
}

int Lib9Api2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl19Api2" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl19Impl lib9api2impl19impl;
        lib9api2impl19impl.doSomething();
        Lib9Api2Impl20Api1 lib9api2impl20api1;
        lib9api2impl20api1.doSomething();
        Lib9Api2Impl20Api2 lib9api2impl20api2;
        lib9api2impl20api2.doSomething();
        Lib9Api2Impl20Api3 lib9api2impl20api3;
        lib9api2impl20api3.doSomething();
        visited = 1;
    }
}

