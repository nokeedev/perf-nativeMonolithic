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
int lib16api2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl34api4(int a, int b) {
    return a + b;
}

int Lib16Api2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl34Api" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl34Core lib16api2impl34core;
        lib16api2impl34core.doSomething();
        visited = 1;
    }
}

