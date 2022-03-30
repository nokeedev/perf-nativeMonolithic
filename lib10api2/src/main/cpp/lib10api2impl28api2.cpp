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
int lib10api2impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl28api24(int a, int b) {
    return a + b;
}

int Lib10Api2Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl28Api2" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl28Impl lib10api2impl28impl;
        lib10api2impl28impl.doSomething();
        Lib10Api2Impl29Api1 lib10api2impl29api1;
        lib10api2impl29api1.doSomething();
        Lib10Api2Impl29Api2 lib10api2impl29api2;
        lib10api2impl29api2.doSomething();
        Lib10Api2Impl29Api3 lib10api2impl29api3;
        lib10api2impl29api3.doSomething();
        visited = 1;
    }
}

