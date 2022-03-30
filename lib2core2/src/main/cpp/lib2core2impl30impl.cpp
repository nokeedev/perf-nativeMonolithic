// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl30impl4(int a, int b) {
    return a + b;
}

int Lib2Core2Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl30Impl" << std::endl;
        Lib2Core2Impl30Core1 lib2core2impl30core1;
        lib2core2impl30core1.doSomething();
        Lib2Core2Impl30Core2 lib2core2impl30core2;
        lib2core2impl30core2.doSomething();
        Lib2Core2Impl31Api1 lib2core2impl31api1;
        lib2core2impl31api1.doSomething();
        Lib2Core2Impl31Api2 lib2core2impl31api2;
        lib2core2impl31api2.doSomething();
        Lib2Core2Impl31Api3 lib2core2impl31api3;
        lib2core2impl31api3.doSomething();
        visited = 1;
    }
}

