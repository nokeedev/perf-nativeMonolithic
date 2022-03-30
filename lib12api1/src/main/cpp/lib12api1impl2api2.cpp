// GENERATED SOURCE FILE

#include "lib12api1_private.h"
#include "lib12api1_impl.h"
#include "lib13api1.h"
#include "lib12impl.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api1impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl2api24(int a, int b) {
    return a + b;
}

int Lib12Api1Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl2Api2" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl2Impl lib12api1impl2impl;
        lib12api1impl2impl.doSomething();
        Lib12Api1Impl3Api1 lib12api1impl3api1;
        lib12api1impl3api1.doSomething();
        Lib12Api1Impl3Api2 lib12api1impl3api2;
        lib12api1impl3api2.doSomething();
        Lib12Api1Impl3Api3 lib12api1impl3api3;
        lib12api1impl3api3.doSomething();
        visited = 1;
    }
}

