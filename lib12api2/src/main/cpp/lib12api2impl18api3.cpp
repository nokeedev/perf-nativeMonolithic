// GENERATED SOURCE FILE

#include "lib12api2_private.h"
#include "lib12api2_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api2impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl18api34(int a, int b) {
    return a + b;
}

int Lib12Api2Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl18Api3" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl18Impl lib12api2impl18impl;
        lib12api2impl18impl.doSomething();
        Lib12Api2Impl19Api1 lib12api2impl19api1;
        lib12api2impl19api1.doSomething();
        Lib12Api2Impl19Api2 lib12api2impl19api2;
        lib12api2impl19api2.doSomething();
        Lib12Api2Impl19Api3 lib12api2impl19api3;
        lib12api2impl19api3.doSomething();
        visited = 1;
    }
}

