// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl17api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl17Api2" << std::endl;
        Lib1Core2Impl17Impl lib1core2impl17impl;
        lib1core2impl17impl.doSomething();
        Lib1Core2Impl18Api1 lib1core2impl18api1;
        lib1core2impl18api1.doSomething();
        Lib1Core2Impl18Api2 lib1core2impl18api2;
        lib1core2impl18api2.doSomething();
        Lib1Core2Impl18Api3 lib1core2impl18api3;
        lib1core2impl18api3.doSomething();
        visited = 1;
    }
}

