// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl16impl4(int a, int b) {
    return a + b;
}

int Lib6Core2Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl16Impl" << std::endl;
        Lib6Core2Impl16Core1 lib6core2impl16core1;
        lib6core2impl16core1.doSomething();
        Lib6Core2Impl16Core2 lib6core2impl16core2;
        lib6core2impl16core2.doSomething();
        Lib6Core2Impl17Api1 lib6core2impl17api1;
        lib6core2impl17api1.doSomething();
        Lib6Core2Impl17Api2 lib6core2impl17api2;
        lib6core2impl17api2.doSomething();
        Lib6Core2Impl17Api3 lib6core2impl17api3;
        lib6core2impl17api3.doSomething();
        visited = 1;
    }
}

