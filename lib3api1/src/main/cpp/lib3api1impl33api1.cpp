// GENERATED SOURCE FILE

#include "lib3api1_private.h"
#include "lib3api1_impl.h"
#include "lib4api1.h"
#include "lib3impl.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl33api14(int a, int b) {
    return a + b;
}

int Lib3Api1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl33Api1" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl34Api lib3api1impl34api;
        lib3api1impl34api.doSomething();
        Lib3Api1Impl33Impl lib3api1impl33impl;
        lib3api1impl33impl.doSomething();
        visited = 1;
    }
}

