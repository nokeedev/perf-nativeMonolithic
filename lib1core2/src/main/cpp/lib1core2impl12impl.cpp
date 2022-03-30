// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl12impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl12Impl" << std::endl;
        Lib1Core2Impl12Core1 lib1core2impl12core1;
        lib1core2impl12core1.doSomething();
        Lib1Core2Impl12Core2 lib1core2impl12core2;
        lib1core2impl12core2.doSomething();
        Lib1Core2Impl13Api1 lib1core2impl13api1;
        lib1core2impl13api1.doSomething();
        Lib1Core2Impl13Api2 lib1core2impl13api2;
        lib1core2impl13api2.doSomething();
        Lib1Core2Impl13Api3 lib1core2impl13api3;
        lib1core2impl13api3.doSomething();
        visited = 1;
    }
}

