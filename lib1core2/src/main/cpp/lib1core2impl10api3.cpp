// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl10api34(int a, int b) {
    return a + b;
}

int Lib1Core2Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl10Api3" << std::endl;
        Lib1Core2Impl10Impl lib1core2impl10impl;
        lib1core2impl10impl.doSomething();
        Lib1Core2Impl11Api1 lib1core2impl11api1;
        lib1core2impl11api1.doSomething();
        Lib1Core2Impl11Api2 lib1core2impl11api2;
        lib1core2impl11api2.doSomething();
        Lib1Core2Impl11Api3 lib1core2impl11api3;
        lib1core2impl11api3.doSomething();
        visited = 1;
    }
}

