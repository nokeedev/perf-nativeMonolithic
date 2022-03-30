// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl11impl4(int a, int b) {
    return a + b;
}

int Lib5Core1Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl11Impl" << std::endl;
        Lib5Core1Impl11Core1 lib5core1impl11core1;
        lib5core1impl11core1.doSomething();
        Lib5Core1Impl11Core2 lib5core1impl11core2;
        lib5core1impl11core2.doSomething();
        Lib5Core1Impl12Api1 lib5core1impl12api1;
        lib5core1impl12api1.doSomething();
        Lib5Core1Impl12Api2 lib5core1impl12api2;
        lib5core1impl12api2.doSomething();
        Lib5Core1Impl12Api3 lib5core1impl12api3;
        lib5core1impl12api3.doSomething();
        visited = 1;
    }
}

