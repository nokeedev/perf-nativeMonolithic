// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl4api24(int a, int b) {
    return a + b;
}

int Lib1Core2Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl4Api2" << std::endl;
        Lib1Core2Impl4Impl lib1core2impl4impl;
        lib1core2impl4impl.doSomething();
        Lib1Core2Impl5Api1 lib1core2impl5api1;
        lib1core2impl5api1.doSomething();
        Lib1Core2Impl5Api2 lib1core2impl5api2;
        lib1core2impl5api2.doSomething();
        Lib1Core2Impl5Api3 lib1core2impl5api3;
        lib1core2impl5api3.doSomething();
        visited = 1;
    }
}

