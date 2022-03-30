// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl12impl4(int a, int b) {
    return a + b;
}

int Lib9Core2Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl12Impl" << std::endl;
        Lib9Core2Impl12Core1 lib9core2impl12core1;
        lib9core2impl12core1.doSomething();
        Lib9Core2Impl12Core2 lib9core2impl12core2;
        lib9core2impl12core2.doSomething();
        Lib9Core2Impl13Api1 lib9core2impl13api1;
        lib9core2impl13api1.doSomething();
        Lib9Core2Impl13Api2 lib9core2impl13api2;
        lib9core2impl13api2.doSomething();
        Lib9Core2Impl13Api3 lib9core2impl13api3;
        lib9core2impl13api3.doSomething();
        visited = 1;
    }
}

