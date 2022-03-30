// GENERATED SOURCE FILE

#include "lib15api2_private.h"
#include "lib15api2_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api2impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl11api34(int a, int b) {
    return a + b;
}

int Lib15Api2Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl11Api3" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl11Impl lib15api2impl11impl;
        lib15api2impl11impl.doSomething();
        Lib15Api2Impl12Api1 lib15api2impl12api1;
        lib15api2impl12api1.doSomething();
        Lib15Api2Impl12Api2 lib15api2impl12api2;
        lib15api2impl12api2.doSomething();
        Lib15Api2Impl12Api3 lib15api2impl12api3;
        lib15api2impl12api3.doSomething();
        visited = 1;
    }
}

