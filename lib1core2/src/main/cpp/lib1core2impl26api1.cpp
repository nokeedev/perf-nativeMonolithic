// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl26api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl26Api1" << std::endl;
        Lib1Core2Impl27Api1 lib1core2impl27api1;
        lib1core2impl27api1.doSomething();
        Lib1Core2Impl26Impl lib1core2impl26impl;
        lib1core2impl26impl.doSomething();
        Lib1Core2Impl27Api2 lib1core2impl27api2;
        lib1core2impl27api2.doSomething();
        Lib1Core2Impl27Api3 lib1core2impl27api3;
        lib1core2impl27api3.doSomething();
        visited = 1;
    }
}

