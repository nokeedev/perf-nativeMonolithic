// GENERATED SOURCE FILE

#include "lib5core1_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1_test4(int a, int b) {
    return a + b;
}

int Lib5Core1Test::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Test::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Test" << std::endl;
        visited = 1;
    }
}

