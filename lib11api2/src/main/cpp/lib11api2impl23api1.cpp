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
int lib11api2impl23api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl23api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl23api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl23api14(int a, int b) {
    return a + b;
}

int Lib11Api2Impl23Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl23Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl23Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl24Api1 lib11api2impl24api1;
        lib11api2impl24api1.doSomething();
        Lib11Api2Impl23Impl lib11api2impl23impl;
        lib11api2impl23impl.doSomething();
        Lib11Api2Impl24Api2 lib11api2impl24api2;
        lib11api2impl24api2.doSomething();
        Lib11Api2Impl24Api3 lib11api2impl24api3;
        lib11api2impl24api3.doSomething();
        visited = 1;
    }
}

