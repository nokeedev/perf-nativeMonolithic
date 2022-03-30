// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl11impl4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl11Impl" << std::endl;
        Lib2Core1Impl11Core1 lib2core1impl11core1;
        lib2core1impl11core1.doSomething();
        Lib2Core1Impl11Core2 lib2core1impl11core2;
        lib2core1impl11core2.doSomething();
        Lib2Core1Impl12Api1 lib2core1impl12api1;
        lib2core1impl12api1.doSomething();
        Lib2Core1Impl12Api2 lib2core1impl12api2;
        lib2core1impl12api2.doSomething();
        Lib2Core1Impl12Api3 lib2core1impl12api3;
        lib2core1impl12api3.doSomething();
        visited = 1;
    }
}

