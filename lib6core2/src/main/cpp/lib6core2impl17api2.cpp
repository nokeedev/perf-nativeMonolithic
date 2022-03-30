// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl17api24(int a, int b) {
    return a + b;
}

int Lib6Core2Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl17Api2" << std::endl;
        Lib6Core2Impl17Impl lib6core2impl17impl;
        lib6core2impl17impl.doSomething();
        Lib6Core2Impl18Api1 lib6core2impl18api1;
        lib6core2impl18api1.doSomething();
        Lib6Core2Impl18Api2 lib6core2impl18api2;
        lib6core2impl18api2.doSomething();
        Lib6Core2Impl18Api3 lib6core2impl18api3;
        lib6core2impl18api3.doSomething();
        visited = 1;
    }
}

