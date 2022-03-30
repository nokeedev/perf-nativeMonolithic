// GENERATED SOURCE FILE

#include "lib2api2_private.h"
#include "lib2api2_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api2impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl21api14(int a, int b) {
    return a + b;
}

int Lib2Api2Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl21Api1" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl22Api1 lib2api2impl22api1;
        lib2api2impl22api1.doSomething();
        Lib2Api2Impl21Impl lib2api2impl21impl;
        lib2api2impl21impl.doSomething();
        Lib2Api2Impl22Api2 lib2api2impl22api2;
        lib2api2impl22api2.doSomething();
        Lib2Api2Impl22Api3 lib2api2impl22api3;
        lib2api2impl22api3.doSomething();
        visited = 1;
    }
}

