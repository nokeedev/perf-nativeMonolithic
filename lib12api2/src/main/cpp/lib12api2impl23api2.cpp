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
int lib12api2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api2impl23api24(int a, int b) {
    return a + b;
}

int Lib12Api2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api2Impl23Api2" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api2Impl23Impl lib12api2impl23impl;
        lib12api2impl23impl.doSomething();
        Lib12Api2Impl24Api1 lib12api2impl24api1;
        lib12api2impl24api1.doSomething();
        Lib12Api2Impl24Api2 lib12api2impl24api2;
        lib12api2impl24api2.doSomething();
        Lib12Api2Impl24Api3 lib12api2impl24api3;
        lib12api2impl24api3.doSomething();
        visited = 1;
    }
}

