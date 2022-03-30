// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl25core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25core24(int a, int b) {
    return a + b;
}

int AppImpl25Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl25Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl25Core2" << std::endl;
        visited = 1;
    }
}

