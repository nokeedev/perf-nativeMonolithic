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
int lib2api2impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl11api14(int a, int b) {
    return a + b;
}

int Lib2Api2Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl11Api1" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl12Api1 lib2api2impl12api1;
        lib2api2impl12api1.doSomething();
        Lib2Api2Impl11Impl lib2api2impl11impl;
        lib2api2impl11impl.doSomething();
        Lib2Api2Impl12Api2 lib2api2impl12api2;
        lib2api2impl12api2.doSomething();
        Lib2Api2Impl12Api3 lib2api2impl12api3;
        lib2api2impl12api3.doSomething();
        visited = 1;
    }
}

