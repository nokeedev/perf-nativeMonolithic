// GENERATED SOURCE FILE

#include "lib11api3_private.h"
#include "lib11api3_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api3impl2core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl2core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl2core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api3impl2core24(int a, int b) {
    return a + b;
}

int Lib11Api3Impl2Core2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api3Impl2Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api3Impl2Core2" << std::endl;
        visited = 1;
    }
}
