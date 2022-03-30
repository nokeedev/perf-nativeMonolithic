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
int lib10api2impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api2impl27api34(int a, int b) {
    return a + b;
}

int Lib10Api2Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api2Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api2Impl27Api3" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api2Impl27Impl lib10api2impl27impl;
        lib10api2impl27impl.doSomething();
        Lib10Api2Impl28Api1 lib10api2impl28api1;
        lib10api2impl28api1.doSomething();
        Lib10Api2Impl28Api2 lib10api2impl28api2;
        lib10api2impl28api2.doSomething();
        Lib10Api2Impl28Api3 lib10api2impl28api3;
        lib10api2impl28api3.doSomething();
        visited = 1;
    }
}

