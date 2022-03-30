// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl19impl4(int a, int b) {
    return a + b;
}

int Lib2Core2Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl19Impl" << std::endl;
        Lib2Core2Impl19Core1 lib2core2impl19core1;
        lib2core2impl19core1.doSomething();
        Lib2Core2Impl19Core2 lib2core2impl19core2;
        lib2core2impl19core2.doSomething();
        Lib2Core2Impl20Api1 lib2core2impl20api1;
        lib2core2impl20api1.doSomething();
        Lib2Core2Impl20Api2 lib2core2impl20api2;
        lib2core2impl20api2.doSomething();
        Lib2Core2Impl20Api3 lib2core2impl20api3;
        lib2core2impl20api3.doSomething();
        visited = 1;
    }
}

