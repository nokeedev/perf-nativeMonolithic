// GENERATED SOURCE FILE

#include "lib9impl_private.h"
#include "lib9impl_impl.h"
#include "lib9core1.h"
#include "lib9core2.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9implimpl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl26api34(int a, int b) {
    return a + b;
}

int Lib9ImplImpl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl26Api3" << std::endl;
        Lib9Core1 lib9core1;
        lib9core1.doSomething();
        Lib9Core2 lib9core2;
        lib9core2.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9ImplImpl26Impl lib9implimpl26impl;
        lib9implimpl26impl.doSomething();
        Lib9ImplImpl27Api1 lib9implimpl27api1;
        lib9implimpl27api1.doSomething();
        Lib9ImplImpl27Api2 lib9implimpl27api2;
        lib9implimpl27api2.doSomething();
        Lib9ImplImpl27Api3 lib9implimpl27api3;
        lib9implimpl27api3.doSomething();
        visited = 1;
    }
}

