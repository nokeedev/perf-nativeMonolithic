// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl9api2_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9api2_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9api2_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9api2_test4(int a, int b) {
    return a + b;
}

int AppImpl9Api2Test::visited = 0;

/*
 * Here is a function.
 */
void AppImpl9Api2Test::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl9Api2Test" << std::endl;
        visited = 1;
    }
}
