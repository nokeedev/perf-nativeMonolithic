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
int lib14implimpl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl19api24(int a, int b) {
    return a + b;
}

int Lib14ImplImpl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl19Api2" << std::endl;
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
        Lib14ImplImpl19Impl lib14implimpl19impl;
        lib14implimpl19impl.doSomething();
        Lib14ImplImpl20Api1 lib14implimpl20api1;
        lib14implimpl20api1.doSomething();
        Lib14ImplImpl20Api2 lib14implimpl20api2;
        lib14implimpl20api2.doSomething();
        Lib14ImplImpl20Api3 lib14implimpl20api3;
        lib14implimpl20api3.doSomething();
        visited = 1;
    }
}

