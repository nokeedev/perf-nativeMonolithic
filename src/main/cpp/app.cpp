// GENERATED SOURCE FILE

#include "app.h"
#include "app_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int app1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int app4(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int main() {
    App app;
    app.doSomething();
    app.doSomething();
    return 0;
}

int App::visited = 0;

/*
 * Here is a function.
 */
void App::doSomething() {
    if (visited == 0) {
        std::cout << "visit App" << std::endl;
        AppImpl1Api1 appimpl1api1;
        appimpl1api1.doSomething();
        AppImpl1Api2 appimpl1api2;
        appimpl1api2.doSomething();
        AppImpl1Api3 appimpl1api3;
        appimpl1api3.doSomething();
        visited = 1;
    }
}

