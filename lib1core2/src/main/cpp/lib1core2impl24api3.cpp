// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl24api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl24api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl24api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl24api34(int a, int b) {
    return a + b;
}

int Lib1Core2Impl24Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl24Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl24Api3" << std::endl;
        Lib1Core2Impl24Impl lib1core2impl24impl;
        lib1core2impl24impl.doSomething();
        Lib1Core2Impl25Api1 lib1core2impl25api1;
        lib1core2impl25api1.doSomething();
        Lib1Core2Impl25Api2 lib1core2impl25api2;
        lib1core2impl25api2.doSomething();
        Lib1Core2Impl25Api3 lib1core2impl25api3;
        lib1core2impl25api3.doSomething();
        visited = 1;
    }
}

