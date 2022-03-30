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
int lib3api1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl16api24(int a, int b) {
    return a + b;
}

int Lib3Api1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl16Api2" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl16Impl lib3api1impl16impl;
        lib3api1impl16impl.doSomething();
        Lib3Api1Impl17Api1 lib3api1impl17api1;
        lib3api1impl17api1.doSomething();
        Lib3Api1Impl17Api2 lib3api1impl17api2;
        lib3api1impl17api2.doSomething();
        Lib3Api1Impl17Api3 lib3api1impl17api3;
        lib3api1impl17api3.doSomething();
        visited = 1;
    }
}

