// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl6impl_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6impl_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6impl_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6impl_test4(int a, int b) {
    return a + b;
}

int AppImpl6ImplTest::visited = 0;

/*
 * Here is a function.
 */
void AppImpl6ImplTest::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl6ImplTest" << std::endl;
        visited = 1;
    }
}

