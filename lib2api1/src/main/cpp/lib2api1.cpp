// GENERATED SOURCE FILE

#include "lib2api1_impl.h"
#include "lib2api1_private.h"
#include "lib3api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api14(int a, int b) {
    return a + b;
}

int Lib2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api1" << std::endl;
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib2Api1Impl1Api1 lib2api1impl1api1;
        lib2api1impl1api1.doSomething();
        Lib2Api1Impl1Api2 lib2api1impl1api2;
        lib2api1impl1api2.doSomething();
        Lib2Api1Impl1Api3 lib2api1impl1api3;
        lib2api1impl1api3.doSomething();
        visited = 1;
    }
}

