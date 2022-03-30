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
int lib1implimpl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1implimpl17impl4(int a, int b) {
    return a + b;
}

int Lib1ImplImpl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplImpl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplImpl17Impl" << std::endl;
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
        Lib1ImplImpl17Core1 lib1implimpl17core1;
        lib1implimpl17core1.doSomething();
        Lib1ImplImpl17Core2 lib1implimpl17core2;
        lib1implimpl17core2.doSomething();
        Lib1ImplImpl18Api1 lib1implimpl18api1;
        lib1implimpl18api1.doSomething();
        Lib1ImplImpl18Api2 lib1implimpl18api2;
        lib1implimpl18api2.doSomething();
        Lib1ImplImpl18Api3 lib1implimpl18api3;
        lib1implimpl18api3.doSomething();
        visited = 1;
    }
}

