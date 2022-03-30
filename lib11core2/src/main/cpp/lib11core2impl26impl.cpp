// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl26impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl26Impl" << std::endl;
        Lib11Core2Impl26Core1 lib11core2impl26core1;
        lib11core2impl26core1.doSomething();
        Lib11Core2Impl26Core2 lib11core2impl26core2;
        lib11core2impl26core2.doSomething();
        Lib11Core2Impl27Api1 lib11core2impl27api1;
        lib11core2impl27api1.doSomething();
        Lib11Core2Impl27Api2 lib11core2impl27api2;
        lib11core2impl27api2.doSomething();
        Lib11Core2Impl27Api3 lib11core2impl27api3;
        lib11core2impl27api3.doSomething();
        visited = 1;
    }
}

