// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl14api3_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14api3_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14api3_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14api3_test4(int a, int b) {
    return a + b;
}

int AppImpl14Api3Test::visited = 0;

/*
 * Here is a function.
 */
void AppImpl14Api3Test::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl14Api3Test" << std::endl;
        visited = 1;
    }
}

