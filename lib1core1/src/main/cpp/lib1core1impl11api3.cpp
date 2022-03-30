// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl11api34(int a, int b) {
    return a + b;
}

int Lib1Core1Impl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl11Api3" << std::endl;
        Lib1Core1Impl11Impl lib1core1impl11impl;
        lib1core1impl11impl.doSomething();
        Lib1Core1Impl12Api1 lib1core1impl12api1;
        lib1core1impl12api1.doSomething();
        Lib1Core1Impl12Api2 lib1core1impl12api2;
        lib1core1impl12api2.doSomething();
        Lib1Core1Impl12Api3 lib1core1impl12api3;
        lib1core1impl12api3.doSomething();
        visited = 1;
    }
}

