// GENERATED SOURCE FILE

#include "lib11api2_private.h"
#include "lib11api2_impl.h"
#include "lib11impl.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl25impl4(int a, int b) {
    return a + b;
}

int Lib11Api2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl25Impl" << std::endl;
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api2Impl25Core1 lib11api2impl25core1;
        lib11api2impl25core1.doSomething();
        Lib11Api2Impl25Core2 lib11api2impl25core2;
        lib11api2impl25core2.doSomething();
        Lib11Api2Impl26Api1 lib11api2impl26api1;
        lib11api2impl26api1.doSomething();
        Lib11Api2Impl26Api2 lib11api2impl26api2;
        lib11api2impl26api2.doSomething();
        Lib11Api2Impl26Api3 lib11api2impl26api3;
        lib11api2impl26api3.doSomething();
        visited = 1;
    }
}
