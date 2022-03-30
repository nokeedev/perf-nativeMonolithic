// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl21impl4(int a, int b) {
    return a + b;
}

int Lib2Core2Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl21Impl" << std::endl;
        Lib2Core2Impl21Core1 lib2core2impl21core1;
        lib2core2impl21core1.doSomething();
        Lib2Core2Impl21Core2 lib2core2impl21core2;
        lib2core2impl21core2.doSomething();
        Lib2Core2Impl22Api1 lib2core2impl22api1;
        lib2core2impl22api1.doSomething();
        Lib2Core2Impl22Api2 lib2core2impl22api2;
        lib2core2impl22api2.doSomething();
        Lib2Core2Impl22Api3 lib2core2impl22api3;
        lib2core2impl22api3.doSomething();
        visited = 1;
    }
}

