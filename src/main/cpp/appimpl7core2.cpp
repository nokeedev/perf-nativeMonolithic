// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl7core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7core24(int a, int b) {
    return a + b;
}

int AppImpl7Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl7Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl7Core2" << std::endl;
        visited = 1;
    }
}

