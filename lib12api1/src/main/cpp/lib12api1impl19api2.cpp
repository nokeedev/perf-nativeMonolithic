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
int lib12api1impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl19api24(int a, int b) {
    return a + b;
}

int Lib12Api1Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl19Api2" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl19Impl lib12api1impl19impl;
        lib12api1impl19impl.doSomething();
        Lib12Api1Impl20Api1 lib12api1impl20api1;
        lib12api1impl20api1.doSomething();
        Lib12Api1Impl20Api2 lib12api1impl20api2;
        lib12api1impl20api2.doSomething();
        Lib12Api1Impl20Api3 lib12api1impl20api3;
        lib12api1impl20api3.doSomething();
        visited = 1;
    }
}

