// GENERATED SOURCE FILE

#include "lib12api1_private.h"
#include "lib12api1_impl.h"
#include "lib13api1.h"
#include "lib12impl.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api1impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl4api14(int a, int b) {
    return a + b;
}

int Lib12Api1Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl4Api1" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl5Api1 lib12api1impl5api1;
        lib12api1impl5api1.doSomething();
        Lib12Api1Impl4Impl lib12api1impl4impl;
        lib12api1impl4impl.doSomething();
        Lib12Api1Impl5Api2 lib12api1impl5api2;
        lib12api1impl5api2.doSomething();
        Lib12Api1Impl5Api3 lib12api1impl5api3;
        lib12api1impl5api3.doSomething();
        visited = 1;
    }
}

