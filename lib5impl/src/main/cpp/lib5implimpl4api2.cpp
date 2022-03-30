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
int lib5implimpl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl4api24(int a, int b) {
    return a + b;
}

int Lib5ImplImpl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl4Api2" << std::endl;
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
        Lib5ImplImpl4Impl lib5implimpl4impl;
        lib5implimpl4impl.doSomething();
        Lib5ImplImpl5Api1 lib5implimpl5api1;
        lib5implimpl5api1.doSomething();
        Lib5ImplImpl5Api2 lib5implimpl5api2;
        lib5implimpl5api2.doSomething();
        Lib5ImplImpl5Api3 lib5implimpl5api3;
        lib5implimpl5api3.doSomething();
        visited = 1;
    }
}

