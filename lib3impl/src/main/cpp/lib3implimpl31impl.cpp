// GENERATED SOURCE FILE

#include "lib3impl_private.h"
#include "lib3impl_impl.h"
#include "lib3core1.h"
#include "lib3core2.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3implimpl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl31impl4(int a, int b) {
    return a + b;
}

int Lib3ImplImpl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl31Impl" << std::endl;
        Lib3Core1 lib3core1;
        lib3core1.doSomething();
        Lib3Core2 lib3core2;
        lib3core2.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3ImplImpl31Core1 lib3implimpl31core1;
        lib3implimpl31core1.doSomething();
        Lib3ImplImpl31Core2 lib3implimpl31core2;
        lib3implimpl31core2.doSomething();
        Lib3ImplImpl32Api1 lib3implimpl32api1;
        lib3implimpl32api1.doSomething();
        Lib3ImplImpl32Api2 lib3implimpl32api2;
        lib3implimpl32api2.doSomething();
        Lib3ImplImpl32Api3 lib3implimpl32api3;
        lib3implimpl32api3.doSomething();
        visited = 1;
    }
}

