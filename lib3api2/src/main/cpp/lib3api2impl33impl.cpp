// GENERATED SOURCE FILE

#include "lib3api2_private.h"
#include "lib3api2_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api2impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl33impl4(int a, int b) {
    return a + b;
}

int Lib3Api2Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api2Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api2Impl33Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api2Impl33Core lib3api2impl33core;
        lib3api2impl33core.doSomething();
        Lib3Api2Impl34Api lib3api2impl34api;
        lib3api2impl34api.doSomething();
        visited = 1;
    }
}

