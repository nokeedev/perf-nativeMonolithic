// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl31impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl31Impl" << std::endl;
        Lib1Core2Impl31Core1 lib1core2impl31core1;
        lib1core2impl31core1.doSomething();
        Lib1Core2Impl31Core2 lib1core2impl31core2;
        lib1core2impl31core2.doSomething();
        Lib1Core2Impl32Api1 lib1core2impl32api1;
        lib1core2impl32api1.doSomething();
        Lib1Core2Impl32Api2 lib1core2impl32api2;
        lib1core2impl32api2.doSomething();
        Lib1Core2Impl32Api3 lib1core2impl32api3;
        lib1core2impl32api3.doSomething();
        visited = 1;
    }
}

