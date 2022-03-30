// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl21api14(int a, int b) {
    return a + b;
}

int Lib12Api3Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl21Api1" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl22Api1 lib12api3impl22api1;
        lib12api3impl22api1.doSomething();
        Lib12Api3Impl21Impl lib12api3impl21impl;
        lib12api3impl21impl.doSomething();
        Lib12Api3Impl22Api2 lib12api3impl22api2;
        lib12api3impl22api2.doSomething();
        Lib12Api3Impl22Api3 lib12api3impl22api3;
        lib12api3impl22api3.doSomething();
        visited = 1;
    }
}

