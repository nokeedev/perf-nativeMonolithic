// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl33api14(int a, int b) {
    return a + b;
}

int Lib17Api1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl33Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl34Api lib17api1impl34api;
        lib17api1impl34api.doSomething();
        Lib17Api1Impl33Impl lib17api1impl33impl;
        lib17api1impl33impl.doSomething();
        visited = 1;
    }
}

