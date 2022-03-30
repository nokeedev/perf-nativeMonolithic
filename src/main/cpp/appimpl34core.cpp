// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl34core1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl34core2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl34core3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl34core4(int a, int b) {
    return a + b;
}

int AppImpl34Core::visited = 0;

/*
 * Here is a function.
 */
void AppImpl34Core::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl34Core" << std::endl;
        visited = 1;
    }
}

