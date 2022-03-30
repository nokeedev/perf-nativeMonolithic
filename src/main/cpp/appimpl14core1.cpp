// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl14core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14core14(int a, int b) {
    return a + b;
}

int AppImpl14Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl14Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl14Core1" << std::endl;
        visited = 1;
    }
}

