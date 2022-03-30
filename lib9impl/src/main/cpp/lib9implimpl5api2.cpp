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
int lib9implimpl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl5api24(int a, int b) {
    return a + b;
}

int Lib9ImplImpl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl5Api2" << std::endl;
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
        Lib9ImplImpl5Impl lib9implimpl5impl;
        lib9implimpl5impl.doSomething();
        Lib9ImplImpl6Api1 lib9implimpl6api1;
        lib9implimpl6api1.doSomething();
        Lib9ImplImpl6Api2 lib9implimpl6api2;
        lib9implimpl6api2.doSomething();
        Lib9ImplImpl6Api3 lib9implimpl6api3;
        lib9implimpl6api3.doSomething();
        visited = 1;
    }
}

