// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl19api34(int a, int b) {
    return a + b;
}

int Lib16Api2Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl19Api3" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl19Impl lib16api2impl19impl;
        lib16api2impl19impl.doSomething();
        Lib16Api2Impl20Api1 lib16api2impl20api1;
        lib16api2impl20api1.doSomething();
        Lib16Api2Impl20Api2 lib16api2impl20api2;
        lib16api2impl20api2.doSomething();
        Lib16Api2Impl20Api3 lib16api2impl20api3;
        lib16api2impl20api3.doSomething();
        visited = 1;
    }
}

