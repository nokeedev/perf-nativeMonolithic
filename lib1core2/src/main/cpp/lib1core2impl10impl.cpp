// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl10impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl10Impl" << std::endl;
        Lib1Core2Impl10Core1 lib1core2impl10core1;
        lib1core2impl10core1.doSomething();
        Lib1Core2Impl10Core2 lib1core2impl10core2;
        lib1core2impl10core2.doSomething();
        Lib1Core2Impl11Api1 lib1core2impl11api1;
        lib1core2impl11api1.doSomething();
        Lib1Core2Impl11Api2 lib1core2impl11api2;
        lib1core2impl11api2.doSomething();
        Lib1Core2Impl11Api3 lib1core2impl11api3;
        lib1core2impl11api3.doSomething();
        visited = 1;
    }
}

