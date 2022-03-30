// GENERATED SOURCE FILE

#include "lib11api2_private.h"
#include "lib11api2_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api2impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl33api34(int a, int b) {
    return a + b;
}

int Lib11Api2Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl33Api3" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl33Impl lib11api2impl33impl;
        lib11api2impl33impl.doSomething();
        Lib11Api2Impl34Api lib11api2impl34api;
        lib11api2impl34api.doSomething();
        visited = 1;
    }
}

