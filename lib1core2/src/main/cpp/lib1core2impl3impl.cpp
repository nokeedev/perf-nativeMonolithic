// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl3impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl3Impl" << std::endl;
        Lib1Core2Impl3Core1 lib1core2impl3core1;
        lib1core2impl3core1.doSomething();
        Lib1Core2Impl3Core2 lib1core2impl3core2;
        lib1core2impl3core2.doSomething();
        Lib1Core2Impl4Api1 lib1core2impl4api1;
        lib1core2impl4api1.doSomething();
        Lib1Core2Impl4Api2 lib1core2impl4api2;
        lib1core2impl4api2.doSomething();
        Lib1Core2Impl4Api3 lib1core2impl4api3;
        lib1core2impl4api3.doSomething();
        visited = 1;
    }
}

