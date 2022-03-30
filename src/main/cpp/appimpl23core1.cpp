// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl23core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23core14(int a, int b) {
    return a + b;
}

int AppImpl23Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl23Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl23Core1" << std::endl;
        visited = 1;
    }
}

