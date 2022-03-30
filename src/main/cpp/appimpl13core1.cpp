// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl13core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl13core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl13core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl13core14(int a, int b) {
    return a + b;
}

int AppImpl13Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl13Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl13Core1" << std::endl;
        visited = 1;
    }
}

