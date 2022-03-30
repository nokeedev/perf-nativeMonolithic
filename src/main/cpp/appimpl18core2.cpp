// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl18core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl18core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl18core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl18core24(int a, int b) {
    return a + b;
}

int AppImpl18Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl18Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl18Core2" << std::endl;
        visited = 1;
    }
}

