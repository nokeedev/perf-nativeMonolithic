// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl3impl4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl3Impl" << std::endl;
        Lib9Core2Impl3Core1 lib9core2impl3core1;
        lib9core2impl3core1.doSomething();
        Lib9Core2Impl3Core2 lib9core2impl3core2;
        lib9core2impl3core2.doSomething();
        Lib9Core2Impl4Api1 lib9core2impl4api1;
        lib9core2impl4api1.doSomething();
        Lib9Core2Impl4Api2 lib9core2impl4api2;
        lib9core2impl4api2.doSomething();
        Lib9Core2Impl4Api3 lib9core2impl4api3;
        lib9core2impl4api3.doSomething();
        visited = 1;
    }
}

