// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl15core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15core24(int a, int b) {
    return a + b;
}

int AppImpl15Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl15Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl15Core2" << std::endl;
        visited = 1;
    }
}

