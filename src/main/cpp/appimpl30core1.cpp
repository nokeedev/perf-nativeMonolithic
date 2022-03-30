// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl30core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30core14(int a, int b) {
    return a + b;
}

int AppImpl30Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl30Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl30Core1" << std::endl;
        visited = 1;
    }
}

