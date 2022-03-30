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
int lib11api2impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl16api24(int a, int b) {
    return a + b;
}

int Lib11Api2Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl16Api2" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl16Impl lib11api2impl16impl;
        lib11api2impl16impl.doSomething();
        Lib11Api2Impl17Api1 lib11api2impl17api1;
        lib11api2impl17api1.doSomething();
        Lib11Api2Impl17Api2 lib11api2impl17api2;
        lib11api2impl17api2.doSomething();
        Lib11Api2Impl17Api3 lib11api2impl17api3;
        lib11api2impl17api3.doSomething();
        visited = 1;
    }
}

