// GENERATED SOURCE FILE

#include "lib10api3_private.h"
#include "lib10api3_impl.h"
#include "lib10impl.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api3impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api3impl12api24(int a, int b) {
    return a + b;
}

int Lib10Api3Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api3Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api3Impl12Api2" << std::endl;
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api3Impl12Impl lib10api3impl12impl;
        lib10api3impl12impl.doSomething();
        Lib10Api3Impl13Api1 lib10api3impl13api1;
        lib10api3impl13api1.doSomething();
        Lib10Api3Impl13Api2 lib10api3impl13api2;
        lib10api3impl13api2.doSomething();
        Lib10Api3Impl13Api3 lib10api3impl13api3;
        lib10api3impl13api3.doSomething();
        visited = 1;
    }
}
