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
int lib1implimpl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl26impl4(int a, int b) {
    return a + b;
}

int Lib1ImplImpl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl26Impl" << std::endl;
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
        Lib1ImplImpl26Core1 lib1implimpl26core1;
        lib1implimpl26core1.doSomething();
        Lib1ImplImpl26Core2 lib1implimpl26core2;
        lib1implimpl26core2.doSomething();
        Lib1ImplImpl27Api1 lib1implimpl27api1;
        lib1implimpl27api1.doSomething();
        Lib1ImplImpl27Api2 lib1implimpl27api2;
        lib1implimpl27api2.doSomething();
        Lib1ImplImpl27Api3 lib1implimpl27api3;
        lib1implimpl27api3.doSomething();
        visited = 1;
    }
}

