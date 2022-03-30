// GENERATED SOURCE FILE

#include "lib3api1_impl.h"
#include "lib3api1_private.h"
#include "lib4api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api14(int a, int b) {
    return a + b;
}

int Lib3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Api1Impl1Api1 lib3api1impl1api1;
        lib3api1impl1api1.doSomething();
        Lib3Api1Impl1Api2 lib3api1impl1api2;
        lib3api1impl1api2.doSomething();
        Lib3Api1Impl1Api3 lib3api1impl1api3;
        lib3api1impl1api3.doSomething();
        visited = 1;
    }
}

