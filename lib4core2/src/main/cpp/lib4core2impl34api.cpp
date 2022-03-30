// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl34api4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl34Api" << std::endl;
        Lib4Core2Impl34Core lib4core2impl34core;
        lib4core2impl34core.doSomething();
        visited = 1;
    }
}

