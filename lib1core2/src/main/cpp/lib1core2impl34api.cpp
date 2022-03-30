// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl34api4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl34Api" << std::endl;
        Lib1Core2Impl34Core lib1core2impl34core;
        lib1core2impl34core.doSomething();
        visited = 1;
    }
}

