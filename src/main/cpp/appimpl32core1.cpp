// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl32core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32core14(int a, int b) {
    return a + b;
}

int AppImpl32Core1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl32Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl32Core1" << std::endl;
        visited = 1;
    }
}

