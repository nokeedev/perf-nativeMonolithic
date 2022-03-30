// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl25core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25core14(int a, int b) {
    return a + b;
}

int AppImpl25Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl25Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl25Core1" << std::endl;
        visited = 1;
    }
}

