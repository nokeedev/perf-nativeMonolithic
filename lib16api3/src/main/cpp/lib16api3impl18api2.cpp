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
int lib16api3impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl18api24(int a, int b) {
    return a + b;
}

int Lib16Api3Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl18Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl18Impl lib16api3impl18impl;
        lib16api3impl18impl.doSomething();
        Lib16Api3Impl19Api1 lib16api3impl19api1;
        lib16api3impl19api1.doSomething();
        Lib16Api3Impl19Api2 lib16api3impl19api2;
        lib16api3impl19api2.doSomething();
        Lib16Api3Impl19Api3 lib16api3impl19api3;
        lib16api3impl19api3.doSomething();
        visited = 1;
    }
}

