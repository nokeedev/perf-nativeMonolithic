// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl11impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl11Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl11Core1 lib17api2impl11core1;
        lib17api2impl11core1.doSomething();
        Lib17Api2Impl11Core2 lib17api2impl11core2;
        lib17api2impl11core2.doSomething();
        Lib17Api2Impl12Api1 lib17api2impl12api1;
        lib17api2impl12api1.doSomething();
        Lib17Api2Impl12Api2 lib17api2impl12api2;
        lib17api2impl12api2.doSomething();
        Lib17Api2Impl12Api3 lib17api2impl12api3;
        lib17api2impl12api3.doSomething();
        visited = 1;
    }
}

