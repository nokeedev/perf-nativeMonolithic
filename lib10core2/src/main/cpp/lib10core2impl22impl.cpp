// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl22impl4(int a, int b) {
    return a + b;
}

int Lib10Core2Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl22Impl" << std::endl;
        Lib10Core2Impl22Core1 lib10core2impl22core1;
        lib10core2impl22core1.doSomething();
        Lib10Core2Impl22Core2 lib10core2impl22core2;
        lib10core2impl22core2.doSomething();
        Lib10Core2Impl23Api1 lib10core2impl23api1;
        lib10core2impl23api1.doSomething();
        Lib10Core2Impl23Api2 lib10core2impl23api2;
        lib10core2impl23api2.doSomething();
        Lib10Core2Impl23Api3 lib10core2impl23api3;
        lib10core2impl23api3.doSomething();
        visited = 1;
    }
}

