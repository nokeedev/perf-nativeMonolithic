// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl4core21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4core22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4core23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4core24(int a, int b) {
    return a + b;
}

int AppImpl4Core2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl4Core2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl4Core2" << std::endl;
        visited = 1;
    }
}

