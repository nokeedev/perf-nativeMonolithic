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
int lib5implimpl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl8api34(int a, int b) {
    return a + b;
}

int Lib5ImplImpl8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl8Api3" << std::endl;
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
        Lib5ImplImpl8Impl lib5implimpl8impl;
        lib5implimpl8impl.doSomething();
        Lib5ImplImpl9Api1 lib5implimpl9api1;
        lib5implimpl9api1.doSomething();
        Lib5ImplImpl9Api2 lib5implimpl9api2;
        lib5implimpl9api2.doSomething();
        Lib5ImplImpl9Api3 lib5implimpl9api3;
        lib5implimpl9api3.doSomething();
        visited = 1;
    }
}
