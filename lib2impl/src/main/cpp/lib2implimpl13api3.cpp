// GENERATED SOURCE FILE

#include "lib2impl_private.h"
#include "lib2impl_impl.h"
#include "lib2core1.h"
#include "lib2core2.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2implimpl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl13api34(int a, int b) {
    return a + b;
}

int Lib2ImplImpl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl13Api3" << std::endl;
        Lib2Core1 lib2core1;
        lib2core1.doSomething();
        Lib2Core2 lib2core2;
        lib2core2.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2ImplImpl13Impl lib2implimpl13impl;
        lib2implimpl13impl.doSomething();
        Lib2ImplImpl14Api1 lib2implimpl14api1;
        lib2implimpl14api1.doSomething();
        Lib2ImplImpl14Api2 lib2implimpl14api2;
        lib2implimpl14api2.doSomething();
        Lib2ImplImpl14Api3 lib2implimpl14api3;
        lib2implimpl14api3.doSomething();
        visited = 1;
    }
}

