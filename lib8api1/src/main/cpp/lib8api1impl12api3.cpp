// GENERATED SOURCE FILE

#include "lib8api1_private.h"
#include "lib8api1_impl.h"
#include "lib9api1.h"
#include "lib8impl.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api1impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl12api34(int a, int b) {
    return a + b;
}

int Lib8Api1Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl12Api3" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl12Impl lib8api1impl12impl;
        lib8api1impl12impl.doSomething();
        Lib8Api1Impl13Api1 lib8api1impl13api1;
        lib8api1impl13api1.doSomething();
        Lib8Api1Impl13Api2 lib8api1impl13api2;
        lib8api1impl13api2.doSomething();
        Lib8Api1Impl13Api3 lib8api1impl13api3;
        lib8api1impl13api3.doSomething();
        visited = 1;
    }
}

