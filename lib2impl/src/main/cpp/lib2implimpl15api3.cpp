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
int lib2implimpl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl15api34(int a, int b) {
    return a + b;
}

int Lib2ImplImpl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl15Api3" << std::endl;
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
        Lib2ImplImpl15Impl lib2implimpl15impl;
        lib2implimpl15impl.doSomething();
        Lib2ImplImpl16Api1 lib2implimpl16api1;
        lib2implimpl16api1.doSomething();
        Lib2ImplImpl16Api2 lib2implimpl16api2;
        lib2implimpl16api2.doSomething();
        Lib2ImplImpl16Api3 lib2implimpl16api3;
        lib2implimpl16api3.doSomething();
        visited = 1;
    }
}
