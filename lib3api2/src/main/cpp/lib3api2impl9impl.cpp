// GENERATED SOURCE FILE

#include "lib3api2_private.h"
#include "lib3api2_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api2impl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl9impl4(int a, int b) {
    return a + b;
}

int Lib3Api2Impl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api2Impl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api2Impl9Impl" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api2Impl9Core1 lib3api2impl9core1;
        lib3api2impl9core1.doSomething();
        Lib3Api2Impl9Core2 lib3api2impl9core2;
        lib3api2impl9core2.doSomething();
        Lib3Api2Impl10Api1 lib3api2impl10api1;
        lib3api2impl10api1.doSomething();
        Lib3Api2Impl10Api2 lib3api2impl10api2;
        lib3api2impl10api2.doSomething();
        Lib3Api2Impl10Api3 lib3api2impl10api3;
        lib3api2impl10api3.doSomething();
        visited = 1;
    }
}
