// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl34api4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl34Api" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl34Core lib17api2impl34core;
        lib17api2impl34core.doSomething();
        visited = 1;
    }
}

