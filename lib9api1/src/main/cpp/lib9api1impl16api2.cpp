// GENERATED SOURCE FILE

#include "lib9api1_private.h"
#include "lib9api1_impl.h"
#include "lib10api1.h"
#include "lib9impl.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl16api24(int a, int b) {
    return a + b;
}

int Lib9Api1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl16Api2" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl16Impl lib9api1impl16impl;
        lib9api1impl16impl.doSomething();
        Lib9Api1Impl17Api1 lib9api1impl17api1;
        lib9api1impl17api1.doSomething();
        Lib9Api1Impl17Api2 lib9api1impl17api2;
        lib9api1impl17api2.doSomething();
        Lib9Api1Impl17Api3 lib9api1impl17api3;
        lib9api1impl17api3.doSomething();
        visited = 1;
    }
}

