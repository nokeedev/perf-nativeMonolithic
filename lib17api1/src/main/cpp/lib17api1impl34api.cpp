// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl34api4(int a, int b) {
    return a + b;
}

int Lib17Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl34Api" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl34Core lib17api1impl34core;
        lib17api1impl34core.doSomething();
        visited = 1;
    }
}

