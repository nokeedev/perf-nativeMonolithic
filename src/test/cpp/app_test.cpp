// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int app_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app_test4(int a, int b) {
    return a + b;
}

int AppTest::visited = 0;

/*
 * Here is a function.
 */
void AppTest::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppTest" << std::endl;
        visited = 1;
    }
}

