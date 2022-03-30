// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl21impl4(int a, int b) {
    return a + b;
}

int Lib11Core2Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl21Impl" << std::endl;
        Lib11Core2Impl21Core1 lib11core2impl21core1;
        lib11core2impl21core1.doSomething();
        Lib11Core2Impl21Core2 lib11core2impl21core2;
        lib11core2impl21core2.doSomething();
        Lib11Core2Impl22Api1 lib11core2impl22api1;
        lib11core2impl22api1.doSomething();
        Lib11Core2Impl22Api2 lib11core2impl22api2;
        lib11core2impl22api2.doSomething();
        Lib11Core2Impl22Api3 lib11core2impl22api3;
        lib11core2impl22api3.doSomething();
        visited = 1;
    }
}

