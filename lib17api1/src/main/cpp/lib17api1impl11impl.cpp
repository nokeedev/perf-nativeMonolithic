// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl11impl4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl11Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl11Core1 lib17api1impl11core1;
        lib17api1impl11core1.doSomething();
        Lib17Api1Impl11Core2 lib17api1impl11core2;
        lib17api1impl11core2.doSomething();
        Lib17Api1Impl12Api1 lib17api1impl12api1;
        lib17api1impl12api1.doSomething();
        Lib17Api1Impl12Api2 lib17api1impl12api2;
        lib17api1impl12api2.doSomething();
        Lib17Api1Impl12Api3 lib17api1impl12api3;
        lib17api1impl12api3.doSomething();
        visited = 1;
    }
}

