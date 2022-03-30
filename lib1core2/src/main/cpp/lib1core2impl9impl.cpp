// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl9impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl9Impl" << std::endl;
        Lib1Core2Impl9Core1 lib1core2impl9core1;
        lib1core2impl9core1.doSomething();
        Lib1Core2Impl9Core2 lib1core2impl9core2;
        lib1core2impl9core2.doSomething();
        Lib1Core2Impl10Api1 lib1core2impl10api1;
        lib1core2impl10api1.doSomething();
        Lib1Core2Impl10Api2 lib1core2impl10api2;
        lib1core2impl10api2.doSomething();
        Lib1Core2Impl10Api3 lib1core2impl10api3;
        lib1core2impl10api3.doSomething();
        visited = 1;
    }
}

