// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl17api24(int a, int b) {
    return a + b;
}

int Lib14ImplImpl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl17Api2" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl17Impl lib14implimpl17impl;
        lib14implimpl17impl.doSomething();
        Lib14ImplImpl18Api1 lib14implimpl18api1;
        lib14implimpl18api1.doSomething();
        Lib14ImplImpl18Api2 lib14implimpl18api2;
        lib14implimpl18api2.doSomething();
        Lib14ImplImpl18Api3 lib14implimpl18api3;
        lib14implimpl18api3.doSomething();
        visited = 1;
    }
}

