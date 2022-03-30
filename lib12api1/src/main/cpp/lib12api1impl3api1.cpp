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
int lib12api1impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl3api14(int a, int b) {
    return a + b;
}

int Lib12Api1Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl3Api1" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl4Api1 lib12api1impl4api1;
        lib12api1impl4api1.doSomething();
        Lib12Api1Impl3Impl lib12api1impl3impl;
        lib12api1impl3impl.doSomething();
        Lib12Api1Impl4Api2 lib12api1impl4api2;
        lib12api1impl4api2.doSomething();
        Lib12Api1Impl4Api3 lib12api1impl4api3;
        lib12api1impl4api3.doSomething();
        visited = 1;
    }
}

