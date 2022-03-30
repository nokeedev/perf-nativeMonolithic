// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl15core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15core14(int a, int b) {
    return a + b;
}

int AppImpl15Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl15Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl15Core1" << std::endl;
        visited = 1;
    }
}

