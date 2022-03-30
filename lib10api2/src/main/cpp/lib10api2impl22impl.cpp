// GENERATED SOURCE FILE

#include "lib10api2_private.h"
#include "lib10api2_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api2impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl22impl4(int a, int b) {
    return a + b;
}

int Lib10Api2Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl22Impl" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl22Core1 lib10api2impl22core1;
        lib10api2impl22core1.doSomething();
        Lib10Api2Impl22Core2 lib10api2impl22core2;
        lib10api2impl22core2.doSomething();
        Lib10Api2Impl23Api1 lib10api2impl23api1;
        lib10api2impl23api1.doSomething();
        Lib10Api2Impl23Api2 lib10api2impl23api2;
        lib10api2impl23api2.doSomething();
        Lib10Api2Impl23Api3 lib10api2impl23api3;
        lib10api2impl23api3.doSomething();
        visited = 1;
    }
}

