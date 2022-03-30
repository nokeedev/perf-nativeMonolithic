// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl12core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12core24(int a, int b) {
    return a + b;
}

int AppImpl12Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl12Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl12Core2" << std::endl;
        visited = 1;
    }
}

