// GENERATED SOURCE FILE

#include "lib12impl_private.h"
#include "lib12impl_impl.h"
#include "lib12core1.h"
#include "lib12core2.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12implimpl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl28api24(int a, int b) {
    return a + b;
}

int Lib12ImplImpl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl28Api2" << std::endl;
        Lib12Core1 lib12core1;
        lib12core1.doSomething();
        Lib12Core2 lib12core2;
        lib12core2.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12ImplImpl28Impl lib12implimpl28impl;
        lib12implimpl28impl.doSomething();
        Lib12ImplImpl29Api1 lib12implimpl29api1;
        lib12implimpl29api1.doSomething();
        Lib12ImplImpl29Api2 lib12implimpl29api2;
        lib12implimpl29api2.doSomething();
        Lib12ImplImpl29Api3 lib12implimpl29api3;
        lib12implimpl29api3.doSomething();
        visited = 1;
    }
}

