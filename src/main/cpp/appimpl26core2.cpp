// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl26core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl26core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl26core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl26core24(int a, int b) {
    return a + b;
}

int AppImpl26Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl26Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl26Core2" << std::endl;
        visited = 1;
    }
}

