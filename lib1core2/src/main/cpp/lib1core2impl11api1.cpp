// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl11api14(int a, int b) {
    return a + b;
}

int Lib1Core2Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl11Api1" << std::endl;
        Lib1Core2Impl12Api1 lib1core2impl12api1;
        lib1core2impl12api1.doSomething();
        Lib1Core2Impl11Impl lib1core2impl11impl;
        lib1core2impl11impl.doSomething();
        Lib1Core2Impl12Api2 lib1core2impl12api2;
        lib1core2impl12api2.doSomething();
        Lib1Core2Impl12Api3 lib1core2impl12api3;
        lib1core2impl12api3.doSomething();
        visited = 1;
    }
}

