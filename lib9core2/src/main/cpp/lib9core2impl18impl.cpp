// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl18impl4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl18Impl" << std::endl;
        Lib9Core2Impl18Core1 lib9core2impl18core1;
        lib9core2impl18core1.doSomething();
        Lib9Core2Impl18Core2 lib9core2impl18core2;
        lib9core2impl18core2.doSomething();
        Lib9Core2Impl19Api1 lib9core2impl19api1;
        lib9core2impl19api1.doSomething();
        Lib9Core2Impl19Api2 lib9core2impl19api2;
        lib9core2impl19api2.doSomething();
        Lib9Core2Impl19Api3 lib9core2impl19api3;
        lib9core2impl19api3.doSomething();
        visited = 1;
    }
}

