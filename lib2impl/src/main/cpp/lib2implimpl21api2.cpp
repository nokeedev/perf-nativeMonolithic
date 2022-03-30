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
int lib2implimpl21api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl21api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl21api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl21api24(int a, int b) {
    return a + b;
}

int Lib2ImplImpl21Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl21Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl21Api2" << std::endl;
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
        Lib2ImplImpl21Impl lib2implimpl21impl;
        lib2implimpl21impl.doSomething();
        Lib2ImplImpl22Api1 lib2implimpl22api1;
        lib2implimpl22api1.doSomething();
        Lib2ImplImpl22Api2 lib2implimpl22api2;
        lib2implimpl22api2.doSomething();
        Lib2ImplImpl22Api3 lib2implimpl22api3;
        lib2implimpl22api3.doSomething();
        visited = 1;
    }
}

