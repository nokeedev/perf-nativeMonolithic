// GENERATED SOURCE FILE

#include "lib11api2_private.h"
#include "lib11api2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api2impl30core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl30core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl30core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api2impl30core24(int a, int b) {
    return a + b;
}

int Lib11Api2Impl30Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api2Impl30Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api2Impl30Core2" << std::endl;
        visited = 1;
    }
}
