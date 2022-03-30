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
int lib5implimpl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl5api34(int a, int b) {
    return a + b;
}

int Lib5ImplImpl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl5Api3" << std::endl;
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
        Lib5ImplImpl5Impl lib5implimpl5impl;
        lib5implimpl5impl.doSomething();
        Lib5ImplImpl6Api1 lib5implimpl6api1;
        lib5implimpl6api1.doSomething();
        Lib5ImplImpl6Api2 lib5implimpl6api2;
        lib5implimpl6api2.doSomething();
        Lib5ImplImpl6Api3 lib5implimpl6api3;
        lib5implimpl6api3.doSomething();
        visited = 1;
    }
}

