// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl21core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl21core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl21core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl21core24(int a, int b) {
    return a + b;
}

int AppImpl21Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl21Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl21Core2" << std::endl;
        visited = 1;
    }
}

