// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl32api1_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32api1_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32api1_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32api1_test4(int a, int b) {
    return a + b;
}

int AppImpl32Api1Test::visited = 0;

/*
 * Here is a function.
 */
void AppImpl32Api1Test::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl32Api1Test" << std::endl;
        visited = 1;
    }
}

