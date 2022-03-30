// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl27api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl27Api2" << std::endl;
        Lib1Core2Impl27Impl lib1core2impl27impl;
        lib1core2impl27impl.doSomething();
        Lib1Core2Impl28Api1 lib1core2impl28api1;
        lib1core2impl28api1.doSomething();
        Lib1Core2Impl28Api2 lib1core2impl28api2;
        lib1core2impl28api2.doSomething();
        Lib1Core2Impl28Api3 lib1core2impl28api3;
        lib1core2impl28api3.doSomething();
        visited = 1;
    }
}

