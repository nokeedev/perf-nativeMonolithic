// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl22impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl22Impl" << std::endl;
        Lib1Core2Impl22Core1 lib1core2impl22core1;
        lib1core2impl22core1.doSomething();
        Lib1Core2Impl22Core2 lib1core2impl22core2;
        lib1core2impl22core2.doSomething();
        Lib1Core2Impl23Api1 lib1core2impl23api1;
        lib1core2impl23api1.doSomething();
        Lib1Core2Impl23Api2 lib1core2impl23api2;
        lib1core2impl23api2.doSomething();
        Lib1Core2Impl23Api3 lib1core2impl23api3;
        lib1core2impl23api3.doSomething();
        visited = 1;
    }
}

