// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl12api34(int a, int b) {
    return a + b;
}

int Lib9Core2Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl12Api3" << std::endl;
        Lib9Core2Impl12Impl lib9core2impl12impl;
        lib9core2impl12impl.doSomething();
        Lib9Core2Impl13Api1 lib9core2impl13api1;
        lib9core2impl13api1.doSomething();
        Lib9Core2Impl13Api2 lib9core2impl13api2;
        lib9core2impl13api2.doSomething();
        Lib9Core2Impl13Api3 lib9core2impl13api3;
        lib9core2impl13api3.doSomething();
        visited = 1;
    }
}

