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
int lib11api2impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl21api14(int a, int b) {
    return a + b;
}

int Lib11Api2Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl21Api1" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl22Api1 lib11api2impl22api1;
        lib11api2impl22api1.doSomething();
        Lib11Api2Impl21Impl lib11api2impl21impl;
        lib11api2impl21impl.doSomething();
        Lib11Api2Impl22Api2 lib11api2impl22api2;
        lib11api2impl22api2.doSomething();
        Lib11Api2Impl22Api3 lib11api2impl22api3;
        lib11api2impl22api3.doSomething();
        visited = 1;
    }
}

