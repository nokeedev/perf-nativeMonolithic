// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl17core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17core24(int a, int b) {
    return a + b;
}

int AppImpl17Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl17Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl17Core2" << std::endl;
        visited = 1;
    }
}

