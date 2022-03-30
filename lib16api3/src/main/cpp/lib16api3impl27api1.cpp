// GENERATED SOURCE FILE

#include "lib16api3_private.h"
#include "lib16api3_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api3impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl27api14(int a, int b) {
    return a + b;
}

int Lib16Api3Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl27Api1" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl28Api1 lib16api3impl28api1;
        lib16api3impl28api1.doSomething();
        Lib16Api3Impl27Impl lib16api3impl27impl;
        lib16api3impl27impl.doSomething();
        Lib16Api3Impl28Api2 lib16api3impl28api2;
        lib16api3impl28api2.doSomething();
        Lib16Api3Impl28Api3 lib16api3impl28api3;
        lib16api3impl28api3.doSomething();
        visited = 1;
    }
}

