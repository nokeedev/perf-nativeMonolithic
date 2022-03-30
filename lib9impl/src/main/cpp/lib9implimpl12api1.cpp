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
int lib9implimpl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl12api14(int a, int b) {
    return a + b;
}

int Lib9ImplImpl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl12Api1" << std::endl;
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
        Lib9ImplImpl13Api1 lib9implimpl13api1;
        lib9implimpl13api1.doSomething();
        Lib9ImplImpl12Impl lib9implimpl12impl;
        lib9implimpl12impl.doSomething();
        Lib9ImplImpl13Api2 lib9implimpl13api2;
        lib9implimpl13api2.doSomething();
        Lib9ImplImpl13Api3 lib9implimpl13api3;
        lib9implimpl13api3.doSomething();
        visited = 1;
    }
}

