// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl27api34(int a, int b) {
    return a + b;
}

int Lib3Core2Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl27Api3" << std::endl;
        Lib3Core2Impl27Impl lib3core2impl27impl;
        lib3core2impl27impl.doSomething();
        Lib3Core2Impl28Api1 lib3core2impl28api1;
        lib3core2impl28api1.doSomething();
        Lib3Core2Impl28Api2 lib3core2impl28api2;
        lib3core2impl28api2.doSomething();
        Lib3Core2Impl28Api3 lib3core2impl28api3;
        lib3core2impl28api3.doSomething();
        visited = 1;
    }
}

