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
int lib9api1impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl22impl4(int a, int b) {
    return a + b;
}

int Lib9Api1Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl22Impl" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl22Core1 lib9api1impl22core1;
        lib9api1impl22core1.doSomething();
        Lib9Api1Impl22Core2 lib9api1impl22core2;
        lib9api1impl22core2.doSomething();
        Lib9Api1Impl23Api1 lib9api1impl23api1;
        lib9api1impl23api1.doSomething();
        Lib9Api1Impl23Api2 lib9api1impl23api2;
        lib9api1impl23api2.doSomething();
        Lib9Api1Impl23Api3 lib9api1impl23api3;
        lib9api1impl23api3.doSomething();
        visited = 1;
    }
}

