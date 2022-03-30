// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl22impl4(int a, int b) {
    return a + b;
}

int Lib5Core2Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl22Impl" << std::endl;
        Lib5Core2Impl22Core1 lib5core2impl22core1;
        lib5core2impl22core1.doSomething();
        Lib5Core2Impl22Core2 lib5core2impl22core2;
        lib5core2impl22core2.doSomething();
        Lib5Core2Impl23Api1 lib5core2impl23api1;
        lib5core2impl23api1.doSomething();
        Lib5Core2Impl23Api2 lib5core2impl23api2;
        lib5core2impl23api2.doSomething();
        Lib5Core2Impl23Api3 lib5core2impl23api3;
        lib5core2impl23api3.doSomething();
        visited = 1;
    }
}

