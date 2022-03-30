// GENERATED SOURCE FILE

#include "lib2api2_private.h"
#include "lib2api2_impl.h"
#include "lib2impl.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2api2impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2api2impl27api14(int a, int b) {
    return a + b;
}

int Lib2Api2Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Api2Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Api2Impl27Api1" << std::endl;
        Lib2Impl lib2impl;
        lib2impl.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2Api2Impl28Api1 lib2api2impl28api1;
        lib2api2impl28api1.doSomething();
        Lib2Api2Impl27Impl lib2api2impl27impl;
        lib2api2impl27impl.doSomething();
        Lib2Api2Impl28Api2 lib2api2impl28api2;
        lib2api2impl28api2.doSomething();
        Lib2Api2Impl28Api3 lib2api2impl28api3;
        lib2api2impl28api3.doSomething();
        visited = 1;
    }
}

