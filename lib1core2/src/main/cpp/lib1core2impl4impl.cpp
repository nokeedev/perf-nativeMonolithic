// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl4impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl4Impl" << std::endl;
        Lib1Core2Impl4Core1 lib1core2impl4core1;
        lib1core2impl4core1.doSomething();
        Lib1Core2Impl4Core2 lib1core2impl4core2;
        lib1core2impl4core2.doSomething();
        Lib1Core2Impl5Api1 lib1core2impl5api1;
        lib1core2impl5api1.doSomething();
        Lib1Core2Impl5Api2 lib1core2impl5api2;
        lib1core2impl5api2.doSomething();
        Lib1Core2Impl5Api3 lib1core2impl5api3;
        lib1core2impl5api3.doSomething();
        visited = 1;
    }
}

