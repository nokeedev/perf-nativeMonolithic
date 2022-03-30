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
int lib1implimpl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl14impl4(int a, int b) {
    return a + b;
}

int Lib1ImplImpl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl14Impl" << std::endl;
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
        Lib1ImplImpl14Core1 lib1implimpl14core1;
        lib1implimpl14core1.doSomething();
        Lib1ImplImpl14Core2 lib1implimpl14core2;
        lib1implimpl14core2.doSomething();
        Lib1ImplImpl15Api1 lib1implimpl15api1;
        lib1implimpl15api1.doSomething();
        Lib1ImplImpl15Api2 lib1implimpl15api2;
        lib1implimpl15api2.doSomething();
        Lib1ImplImpl15Api3 lib1implimpl15api3;
        lib1implimpl15api3.doSomething();
        visited = 1;
    }
}

