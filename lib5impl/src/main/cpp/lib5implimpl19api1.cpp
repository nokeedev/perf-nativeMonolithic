// GENERATED SOURCE FILE

#include "lib5impl_private.h"
#include "lib5impl_impl.h"
#include "lib5core1.h"
#include "lib5core2.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5implimpl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl19api14(int a, int b) {
    return a + b;
}

int Lib5ImplImpl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl19Api1" << std::endl;
        Lib5Core1 lib5core1;
        lib5core1.doSomething();
        Lib5Core2 lib5core2;
        lib5core2.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5ImplImpl20Api1 lib5implimpl20api1;
        lib5implimpl20api1.doSomething();
        Lib5ImplImpl19Impl lib5implimpl19impl;
        lib5implimpl19impl.doSomething();
        Lib5ImplImpl20Api2 lib5implimpl20api2;
        lib5implimpl20api2.doSomething();
        Lib5ImplImpl20Api3 lib5implimpl20api3;
        lib5implimpl20api3.doSomething();
        visited = 1;
    }
}

