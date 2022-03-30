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
int lib2implimpl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl28api24(int a, int b) {
    return a + b;
}

int Lib2ImplImpl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl28Api2" << std::endl;
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
        Lib2ImplImpl28Impl lib2implimpl28impl;
        lib2implimpl28impl.doSomething();
        Lib2ImplImpl29Api1 lib2implimpl29api1;
        lib2implimpl29api1.doSomething();
        Lib2ImplImpl29Api2 lib2implimpl29api2;
        lib2implimpl29api2.doSomething();
        Lib2ImplImpl29Api3 lib2implimpl29api3;
        lib2implimpl29api3.doSomething();
        visited = 1;
    }
}

