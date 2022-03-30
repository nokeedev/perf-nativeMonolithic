// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl25api34(int a, int b) {
    return a + b;
}

int Lib1Core2Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl25Api3" << std::endl;
        Lib1Core2Impl25Impl lib1core2impl25impl;
        lib1core2impl25impl.doSomething();
        Lib1Core2Impl26Api1 lib1core2impl26api1;
        lib1core2impl26api1.doSomething();
        Lib1Core2Impl26Api2 lib1core2impl26api2;
        lib1core2impl26api2.doSomething();
        Lib1Core2Impl26Api3 lib1core2impl26api3;
        lib1core2impl26api3.doSomething();
        visited = 1;
    }
}

