// GENERATED SOURCE FILE

#include "lib1impl_private.h"
#include "lib1impl_impl.h"
#include "lib1core1.h"
#include "lib1core2.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1implimpl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl22api24(int a, int b) {
    return a + b;
}

int Lib1ImplImpl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl22Api2" << std::endl;
        Lib1Core1 lib1core1;
        lib1core1.doSomething();
        Lib1Core2 lib1core2;
        lib1core2.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1ImplImpl22Impl lib1implimpl22impl;
        lib1implimpl22impl.doSomething();
        Lib1ImplImpl23Api1 lib1implimpl23api1;
        lib1implimpl23api1.doSomething();
        Lib1ImplImpl23Api2 lib1implimpl23api2;
        lib1implimpl23api2.doSomething();
        Lib1ImplImpl23Api3 lib1implimpl23api3;
        lib1implimpl23api3.doSomething();
        visited = 1;
    }
}

