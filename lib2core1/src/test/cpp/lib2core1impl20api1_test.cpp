// GENERATED SOURCE FILE

#include "lib2core1_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl20api1_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl20api1_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl20api1_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl20api1_test4(int a, int b) {
    return a + b;
}

int Lib2Core1Impl20Api1Test::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl20Api1Test::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl20Api1Test" << std::endl;
        visited = 1;
    }
}
