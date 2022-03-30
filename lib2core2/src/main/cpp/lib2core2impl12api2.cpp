// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl12api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl12Api2" << std::endl;
        Lib2Core2Impl12Impl lib2core2impl12impl;
        lib2core2impl12impl.doSomething();
        Lib2Core2Impl13Api1 lib2core2impl13api1;
        lib2core2impl13api1.doSomething();
        Lib2Core2Impl13Api2 lib2core2impl13api2;
        lib2core2impl13api2.doSomething();
        Lib2Core2Impl13Api3 lib2core2impl13api3;
        lib2core2impl13api3.doSomething();
        visited = 1;
    }
}

