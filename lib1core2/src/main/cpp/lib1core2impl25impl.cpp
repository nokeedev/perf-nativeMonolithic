// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl25impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl25Impl" << std::endl;
        Lib1Core2Impl25Core1 lib1core2impl25core1;
        lib1core2impl25core1.doSomething();
        Lib1Core2Impl25Core2 lib1core2impl25core2;
        lib1core2impl25core2.doSomething();
        Lib1Core2Impl26Api1 lib1core2impl26api1;
        lib1core2impl26api1.doSomething();
        Lib1Core2Impl26Api2 lib1core2impl26api2;
        lib1core2impl26api2.doSomething();
        Lib1Core2Impl26Api3 lib1core2impl26api3;
        lib1core2impl26api3.doSomething();
        visited = 1;
    }
}

