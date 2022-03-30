// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl12api24(int a, int b) {
    return a + b;
}

int Lib16Api2Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl12Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl12Impl lib16api2impl12impl;
        lib16api2impl12impl.doSomething();
        Lib16Api2Impl13Api1 lib16api2impl13api1;
        lib16api2impl13api1.doSomething();
        Lib16Api2Impl13Api2 lib16api2impl13api2;
        lib16api2impl13api2.doSomething();
        Lib16Api2Impl13Api3 lib16api2impl13api3;
        lib16api2impl13api3.doSomething();
        visited = 1;
    }
}

