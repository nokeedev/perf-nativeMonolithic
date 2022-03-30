// GENERATED SOURCE FILE

#include "lib2core2_impl.h"
#include "lib2core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core24(int a, int b) {
    return a + b;
}

int Lib2Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2" << std::endl;
        Lib2Core2Impl1Api1 lib2core2impl1api1;
        lib2core2impl1api1.doSomething();
        Lib2Core2Impl1Api2 lib2core2impl1api2;
        lib2core2impl1api2.doSomething();
        Lib2Core2Impl1Api3 lib2core2impl1api3;
        lib2core2impl1api3.doSomething();
        visited = 1;
    }
}

