// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl17impl4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl17Impl" << std::endl;
        Lib9Core2Impl17Core1 lib9core2impl17core1;
        lib9core2impl17core1.doSomething();
        Lib9Core2Impl17Core2 lib9core2impl17core2;
        lib9core2impl17core2.doSomething();
        Lib9Core2Impl18Api1 lib9core2impl18api1;
        lib9core2impl18api1.doSomething();
        Lib9Core2Impl18Api2 lib9core2impl18api2;
        lib9core2impl18api2.doSomething();
        Lib9Core2Impl18Api3 lib9core2impl18api3;
        lib9core2impl18api3.doSomething();
        visited = 1;
    }
}

