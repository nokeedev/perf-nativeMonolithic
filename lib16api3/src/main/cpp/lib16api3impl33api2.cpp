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
int lib16api3impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl33api24(int a, int b) {
    return a + b;
}

int Lib16Api3Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl33Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl33Impl lib16api3impl33impl;
        lib16api3impl33impl.doSomething();
        Lib16Api3Impl34Api lib16api3impl34api;
        lib16api3impl34api.doSomething();
        visited = 1;
    }
}

