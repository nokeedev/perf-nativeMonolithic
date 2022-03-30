// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl11impl4(int a, int b) {
    return a + b;
}

int Lib4Core2Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl11Impl" << std::endl;
        Lib4Core2Impl11Core1 lib4core2impl11core1;
        lib4core2impl11core1.doSomething();
        Lib4Core2Impl11Core2 lib4core2impl11core2;
        lib4core2impl11core2.doSomething();
        Lib4Core2Impl12Api1 lib4core2impl12api1;
        lib4core2impl12api1.doSomething();
        Lib4Core2Impl12Api2 lib4core2impl12api2;
        lib4core2impl12api2.doSomething();
        Lib4Core2Impl12Api3 lib4core2impl12api3;
        lib4core2impl12api3.doSomething();
        visited = 1;
    }
}

