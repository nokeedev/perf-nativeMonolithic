// GENERATED SOURCE FILE

#include "lib9api1_private.h"
#include "lib9api1_impl.h"
#include "lib10api1.h"
#include "lib9impl.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api1impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl21impl4(int a, int b) {
    return a + b;
}

int Lib9Api1Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl21Impl" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl21Core1 lib9api1impl21core1;
        lib9api1impl21core1.doSomething();
        Lib9Api1Impl21Core2 lib9api1impl21core2;
        lib9api1impl21core2.doSomething();
        Lib9Api1Impl22Api1 lib9api1impl22api1;
        lib9api1impl22api1.doSomething();
        Lib9Api1Impl22Api2 lib9api1impl22api2;
        lib9api1impl22api2.doSomething();
        Lib9Api1Impl22Api3 lib9api1impl22api3;
        lib9api1impl22api3.doSomething();
        visited = 1;
    }
}
