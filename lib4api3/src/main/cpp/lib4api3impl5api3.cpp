// GENERATED SOURCE FILE

#include "lib4api3_private.h"
#include "lib4api3_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api3impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api3impl5api34(int a, int b) {
    return a + b;
}

int Lib4Api3Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api3Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api3Impl5Api3" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api3Impl5Impl lib4api3impl5impl;
        lib4api3impl5impl.doSomething();
        Lib4Api3Impl6Api1 lib4api3impl6api1;
        lib4api3impl6api1.doSomething();
        Lib4Api3Impl6Api2 lib4api3impl6api2;
        lib4api3impl6api2.doSomething();
        Lib4Api3Impl6Api3 lib4api3impl6api3;
        lib4api3impl6api3.doSomething();
        visited = 1;
    }
}

