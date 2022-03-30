// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl23core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23core24(int a, int b) {
    return a + b;
}

int AppImpl23Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl23Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl23Core2" << std::endl;
        visited = 1;
    }
}

