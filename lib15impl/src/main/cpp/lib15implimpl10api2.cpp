// GENERATED SOURCE FILE

#include "lib15impl_private.h"
#include "lib15impl_impl.h"
#include "lib15core1.h"
#include "lib15core2.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15implimpl10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl10api24(int a, int b) {
    return a + b;
}

int Lib15ImplImpl10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl10Api2" << std::endl;
        Lib15Core1 lib15core1;
        lib15core1.doSomething();
        Lib15Core2 lib15core2;
        lib15core2.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15ImplImpl10Impl lib15implimpl10impl;
        lib15implimpl10impl.doSomething();
        Lib15ImplImpl11Api1 lib15implimpl11api1;
        lib15implimpl11api1.doSomething();
        Lib15ImplImpl11Api2 lib15implimpl11api2;
        lib15implimpl11api2.doSomething();
        Lib15ImplImpl11Api3 lib15implimpl11api3;
        lib15implimpl11api3.doSomething();
        visited = 1;
    }
}

