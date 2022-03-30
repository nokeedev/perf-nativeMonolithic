// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl11impl4(int a, int b) {
    return a + b;
}

int Lib15Core2Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl11Impl" << std::endl;
        Lib15Core2Impl11Core1 lib15core2impl11core1;
        lib15core2impl11core1.doSomething();
        Lib15Core2Impl11Core2 lib15core2impl11core2;
        lib15core2impl11core2.doSomething();
        Lib15Core2Impl12Api1 lib15core2impl12api1;
        lib15core2impl12api1.doSomething();
        Lib15Core2Impl12Api2 lib15core2impl12api2;
        lib15core2impl12api2.doSomething();
        Lib15Core2Impl12Api3 lib15core2impl12api3;
        lib15core2impl12api3.doSomething();
        visited = 1;
    }
}

