// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl20impl4(int a, int b) {
    return a + b;
}

int Lib6Core2Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl20Impl" << std::endl;
        Lib6Core2Impl20Core1 lib6core2impl20core1;
        lib6core2impl20core1.doSomething();
        Lib6Core2Impl20Core2 lib6core2impl20core2;
        lib6core2impl20core2.doSomething();
        Lib6Core2Impl21Api1 lib6core2impl21api1;
        lib6core2impl21api1.doSomething();
        Lib6Core2Impl21Api2 lib6core2impl21api2;
        lib6core2impl21api2.doSomething();
        Lib6Core2Impl21Api3 lib6core2impl21api3;
        lib6core2impl21api3.doSomething();
        visited = 1;
    }
}

