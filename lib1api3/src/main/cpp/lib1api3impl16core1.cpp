// GENERATED SOURCE FILE

#include "lib1api3_private.h"
#include "lib1api3_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api3impl16core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl16core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl16core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl16core14(int a, int b) {
    return a + b;
}

int Lib1Api3Impl16Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl16Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl16Core1" << std::endl;
        visited = 1;
    }
}
