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
int lib11api2impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl24api14(int a, int b) {
    return a + b;
}

int Lib11Api2Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl24Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl25Api1 lib11api2impl25api1;
        lib11api2impl25api1.doSomething();
        Lib11Api2Impl24Impl lib11api2impl24impl;
        lib11api2impl24impl.doSomething();
        Lib11Api2Impl25Api2 lib11api2impl25api2;
        lib11api2impl25api2.doSomething();
        Lib11Api2Impl25Api3 lib11api2impl25api3;
        lib11api2impl25api3.doSomething();
        visited = 1;
    }
}

