// GENERATED SOURCE FILE

#include "lib10api2_private.h"
#include "lib10api2_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl23api24(int a, int b) {
    return a + b;
}

int Lib10Api2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl23Api2" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl23Impl lib10api2impl23impl;
        lib10api2impl23impl.doSomething();
        Lib10Api2Impl24Api1 lib10api2impl24api1;
        lib10api2impl24api1.doSomething();
        Lib10Api2Impl24Api2 lib10api2impl24api2;
        lib10api2impl24api2.doSomething();
        Lib10Api2Impl24Api3 lib10api2impl24api3;
        lib10api2impl24api3.doSomething();
        visited = 1;
    }
}

