// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl23api34(int a, int b) {
    return a + b;
}

int Lib1Core2Impl23Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl23Api3" << std::endl;
        Lib1Core2Impl23Impl lib1core2impl23impl;
        lib1core2impl23impl.doSomething();
        Lib1Core2Impl24Api1 lib1core2impl24api1;
        lib1core2impl24api1.doSomething();
        Lib1Core2Impl24Api2 lib1core2impl24api2;
        lib1core2impl24api2.doSomething();
        Lib1Core2Impl24Api3 lib1core2impl24api3;
        lib1core2impl24api3.doSomething();
        visited = 1;
    }
}

