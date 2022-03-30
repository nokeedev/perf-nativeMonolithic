// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl33core1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl33core2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl33core3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl33core4(int a, int b) {
    return a + b;
}

int AppImpl33Core::visited = 0;

/*
 * Here is a function.
 */
void AppImpl33Core::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl33Core" << std::endl;
        visited = 1;
    }
}

