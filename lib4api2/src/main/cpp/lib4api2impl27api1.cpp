// GENERATED SOURCE FILE

#include "lib4api2_private.h"
#include "lib4api2_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api2impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl27api14(int a, int b) {
    return a + b;
}

int Lib4Api2Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2Impl27Api1" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api2Impl28Api1 lib4api2impl28api1;
        lib4api2impl28api1.doSomething();
        Lib4Api2Impl27Impl lib4api2impl27impl;
        lib4api2impl27impl.doSomething();
        Lib4Api2Impl28Api2 lib4api2impl28api2;
        lib4api2impl28api2.doSomething();
        Lib4Api2Impl28Api3 lib4api2impl28api3;
        lib4api2impl28api3.doSomething();
        visited = 1;
    }
}

