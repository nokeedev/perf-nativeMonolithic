// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl33api34(int a, int b) {
    return a + b;
}

int Lib17Api1Impl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl33Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl33Impl lib17api1impl33impl;
        lib17api1impl33impl.doSomething();
        Lib17Api1Impl34Api lib17api1impl34api;
        lib17api1impl34api.doSomething();
        visited = 1;
    }
}

