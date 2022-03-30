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
int lib9api1impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api1impl4api14(int a, int b) {
    return a + b;
}

int Lib9Api1Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api1Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api1Impl4Api1" << std::endl;
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api1Impl5Api1 lib9api1impl5api1;
        lib9api1impl5api1.doSomething();
        Lib9Api1Impl4Impl lib9api1impl4impl;
        lib9api1impl4impl.doSomething();
        Lib9Api1Impl5Api2 lib9api1impl5api2;
        lib9api1impl5api2.doSomething();
        Lib9Api1Impl5Api3 lib9api1impl5api3;
        lib9api1impl5api3.doSomething();
        visited = 1;
    }
}

