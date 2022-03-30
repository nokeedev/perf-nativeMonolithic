// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl23api34(int a, int b) {
    return a + b;
}

int Lib2Core2Impl23Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl23Api3" << std::endl;
        Lib2Core2Impl23Impl lib2core2impl23impl;
        lib2core2impl23impl.doSomething();
        Lib2Core2Impl24Api1 lib2core2impl24api1;
        lib2core2impl24api1.doSomething();
        Lib2Core2Impl24Api2 lib2core2impl24api2;
        lib2core2impl24api2.doSomething();
        Lib2Core2Impl24Api3 lib2core2impl24api3;
        lib2core2impl24api3.doSomething();
        visited = 1;
    }
}

