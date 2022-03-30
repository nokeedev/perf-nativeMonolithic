// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl17core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17core14(int a, int b) {
    return a + b;
}

int AppImpl17Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl17Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl17Core1" << std::endl;
        visited = 1;
    }
}

