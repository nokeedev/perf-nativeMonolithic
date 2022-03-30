// GENERATED SOURCE FILE

#include "lib12api1_impl.h"
#include "lib12api1_private.h"
#include "lib13api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api14(int a, int b) {
    return a + b;
}

int Lib12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Api1Impl1Api1 lib12api1impl1api1;
        lib12api1impl1api1.doSomething();
        Lib12Api1Impl1Api2 lib12api1impl1api2;
        lib12api1impl1api2.doSomething();
        Lib12Api1Impl1Api3 lib12api1impl1api3;
        lib12api1impl1api3.doSomething();
        visited = 1;
    }
}

