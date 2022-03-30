// GENERATED SOURCE FILE

#include "lib10api1_private.h"
#include "lib10api1_impl.h"
#include "lib11api1.h"
#include "lib10impl.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10api1impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10api1impl16api14(int a, int b) {
    return a + b;
}

int Lib10Api1Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Api1Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Api1Impl16Api1" << std::endl;
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib10Impl lib10impl;
        lib10impl.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10Api1Impl17Api1 lib10api1impl17api1;
        lib10api1impl17api1.doSomething();
        Lib10Api1Impl16Impl lib10api1impl16impl;
        lib10api1impl16impl.doSomething();
        Lib10Api1Impl17Api2 lib10api1impl17api2;
        lib10api1impl17api2.doSomething();
        Lib10Api1Impl17Api3 lib10api1impl17api3;
        lib10api1impl17api3.doSomething();
        visited = 1;
    }
}

