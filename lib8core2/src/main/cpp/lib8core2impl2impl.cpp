// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl2impl4(int a, int b) {
    return a + b;
}

int Lib8Core2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl2Impl" << std::endl;
        Lib8Core2Impl2Core1 lib8core2impl2core1;
        lib8core2impl2core1.doSomething();
        Lib8Core2Impl2Core2 lib8core2impl2core2;
        lib8core2impl2core2.doSomething();
        Lib8Core2Impl3Api1 lib8core2impl3api1;
        lib8core2impl3api1.doSomething();
        Lib8Core2Impl3Api2 lib8core2impl3api2;
        lib8core2impl3api2.doSomething();
        Lib8Core2Impl3Api3 lib8core2impl3api3;
        lib8core2impl3api3.doSomething();
        visited = 1;
    }
}

