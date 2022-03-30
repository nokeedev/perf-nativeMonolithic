// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl28impl4(int a, int b) {
    return a + b;
}

int Lib6Core2Impl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl28Impl" << std::endl;
        Lib6Core2Impl28Core1 lib6core2impl28core1;
        lib6core2impl28core1.doSomething();
        Lib6Core2Impl28Core2 lib6core2impl28core2;
        lib6core2impl28core2.doSomething();
        Lib6Core2Impl29Api1 lib6core2impl29api1;
        lib6core2impl29api1.doSomething();
        Lib6Core2Impl29Api2 lib6core2impl29api2;
        lib6core2impl29api2.doSomething();
        Lib6Core2Impl29Api3 lib6core2impl29api3;
        lib6core2impl29api3.doSomething();
        visited = 1;
    }
}

