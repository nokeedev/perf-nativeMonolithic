// GENERATED SOURCE FILE

#include "lib12api3_private.h"
#include "lib12api3_impl.h"
#include "lib12impl.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api3impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api3impl21impl4(int a, int b) {
    return a + b;
}

int Lib12Api3Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api3Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api3Impl21Impl" << std::endl;
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api3Impl21Core1 lib12api3impl21core1;
        lib12api3impl21core1.doSomething();
        Lib12Api3Impl21Core2 lib12api3impl21core2;
        lib12api3impl21core2.doSomething();
        Lib12Api3Impl22Api1 lib12api3impl22api1;
        lib12api3impl22api1.doSomething();
        Lib12Api3Impl22Api2 lib12api3impl22api2;
        lib12api3impl22api2.doSomething();
        Lib12Api3Impl22Api3 lib12api3impl22api3;
        lib12api3impl22api3.doSomething();
        visited = 1;
    }
}

