// GENERATED SOURCE FILE

#include "lib10impl_private.h"
#include "lib10impl_impl.h"
#include "lib10core1.h"
#include "lib10core2.h"
#include "lib11api1.h"
#include "lib11api2.h"
#include "lib11api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10implimpl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10implimpl17api24(int a, int b) {
    return a + b;
}

int Lib10ImplImpl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10ImplImpl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10ImplImpl17Api2" << std::endl;
        Lib10Core1 lib10core1;
        lib10core1.doSomething();
        Lib10Core2 lib10core2;
        lib10core2.doSomething();
        Lib11Api1 lib11api1;
        lib11api1.doSomething();
        Lib11Api2 lib11api2;
        lib11api2.doSomething();
        Lib11Api3 lib11api3;
        lib11api3.doSomething();
        Lib10ImplImpl17Impl lib10implimpl17impl;
        lib10implimpl17impl.doSomething();
        Lib10ImplImpl18Api1 lib10implimpl18api1;
        lib10implimpl18api1.doSomething();
        Lib10ImplImpl18Api2 lib10implimpl18api2;
        lib10implimpl18api2.doSomething();
        Lib10ImplImpl18Api3 lib10implimpl18api3;
        lib10implimpl18api3.doSomething();
        visited = 1;
    }
}

