// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl12api1_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12api1_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12api1_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12api1_test4(int a, int b) {
    return a + b;
}

int AppImpl12Api1Test::visited = 0;

/*
 * Here is a function.
 */
void AppImpl12Api1Test::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl12Api1Test" << std::endl;
        visited = 1;
    }
}

