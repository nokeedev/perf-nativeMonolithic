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
int lib3implimpl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl23impl4(int a, int b) {
    return a + b;
}

int Lib3ImplImpl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl23Impl" << std::endl;
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
        Lib3ImplImpl23Core1 lib3implimpl23core1;
        lib3implimpl23core1.doSomething();
        Lib3ImplImpl23Core2 lib3implimpl23core2;
        lib3implimpl23core2.doSomething();
        Lib3ImplImpl24Api1 lib3implimpl24api1;
        lib3implimpl24api1.doSomething();
        Lib3ImplImpl24Api2 lib3implimpl24api2;
        lib3implimpl24api2.doSomething();
        Lib3ImplImpl24Api3 lib3implimpl24api3;
        lib3implimpl24api3.doSomething();
        visited = 1;
    }
}

