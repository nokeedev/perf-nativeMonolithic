// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl17api24(int a, int b) {
    return a + b;
}

int Lib2Core2Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl17Api2" << std::endl;
        Lib2Core2Impl17Impl lib2core2impl17impl;
        lib2core2impl17impl.doSomething();
        Lib2Core2Impl18Api1 lib2core2impl18api1;
        lib2core2impl18api1.doSomething();
        Lib2Core2Impl18Api2 lib2core2impl18api2;
        lib2core2impl18api2.doSomething();
        Lib2Core2Impl18Api3 lib2core2impl18api3;
        lib2core2impl18api3.doSomething();
        visited = 1;
    }
}

