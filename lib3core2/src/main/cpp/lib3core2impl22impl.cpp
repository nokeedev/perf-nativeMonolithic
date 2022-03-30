// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl22impl4(int a, int b) {
    return a + b;
}

int Lib3Core2Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl22Impl" << std::endl;
        Lib3Core2Impl22Core1 lib3core2impl22core1;
        lib3core2impl22core1.doSomething();
        Lib3Core2Impl22Core2 lib3core2impl22core2;
        lib3core2impl22core2.doSomething();
        Lib3Core2Impl23Api1 lib3core2impl23api1;
        lib3core2impl23api1.doSomething();
        Lib3Core2Impl23Api2 lib3core2impl23api2;
        lib3core2impl23api2.doSomething();
        Lib3Core2Impl23Api3 lib3core2impl23api3;
        lib3core2impl23api3.doSomething();
        visited = 1;
    }
}

