// GENERATED SOURCE FILE

#include "lib1core2_impl.h"
#include "lib1core2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core24(int a, int b) {
    return a + b;
}

int Lib1Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2" << std::endl;
        Lib1Core2Impl1Api1 lib1core2impl1api1;
        lib1core2impl1api1.doSomething();
        Lib1Core2Impl1Api2 lib1core2impl1api2;
        lib1core2impl1api2.doSomething();
        Lib1Core2Impl1Api3 lib1core2impl1api3;
        lib1core2impl1api3.doSomething();
        visited = 1;
    }
}

