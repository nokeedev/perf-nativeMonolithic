// GENERATED SOURCE FILE

#include "lib8api2_private.h"
#include "lib8api2_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api2impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl27api34(int a, int b) {
    return a + b;
}

int Lib8Api2Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl27Api3" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl27Impl lib8api2impl27impl;
        lib8api2impl27impl.doSomething();
        Lib8Api2Impl28Api1 lib8api2impl28api1;
        lib8api2impl28api1.doSomething();
        Lib8Api2Impl28Api2 lib8api2impl28api2;
        lib8api2impl28api2.doSomething();
        Lib8Api2Impl28Api3 lib8api2impl28api3;
        lib8api2impl28api3.doSomething();
        visited = 1;
    }
}

