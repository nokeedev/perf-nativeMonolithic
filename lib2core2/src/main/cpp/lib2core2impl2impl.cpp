// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl2impl4(int a, int b) {
    return a + b;
}

int Lib2Core2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl2Impl" << std::endl;
        Lib2Core2Impl2Core1 lib2core2impl2core1;
        lib2core2impl2core1.doSomething();
        Lib2Core2Impl2Core2 lib2core2impl2core2;
        lib2core2impl2core2.doSomething();
        Lib2Core2Impl3Api1 lib2core2impl3api1;
        lib2core2impl3api1.doSomething();
        Lib2Core2Impl3Api2 lib2core2impl3api2;
        lib2core2impl3api2.doSomething();
        Lib2Core2Impl3Api3 lib2core2impl3api3;
        lib2core2impl3api3.doSomething();
        visited = 1;
    }
}

