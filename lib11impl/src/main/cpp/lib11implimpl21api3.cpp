// GENERATED SOURCE FILE

#include "lib11impl_private.h"
#include "lib11impl_impl.h"
#include "lib11core1.h"
#include "lib11core2.h"
#include "lib12api1.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11implimpl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11implimpl21api34(int a, int b) {
    return a + b;
}

int Lib11ImplImpl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11ImplImpl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11ImplImpl21Api3" << std::endl;
        Lib11Core1 lib11core1;
        lib11core1.doSomething();
        Lib11Core2 lib11core2;
        lib11core2.doSomething();
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11ImplImpl21Impl lib11implimpl21impl;
        lib11implimpl21impl.doSomething();
        Lib11ImplImpl22Api1 lib11implimpl22api1;
        lib11implimpl22api1.doSomething();
        Lib11ImplImpl22Api2 lib11implimpl22api2;
        lib11implimpl22api2.doSomething();
        Lib11ImplImpl22Api3 lib11implimpl22api3;
        lib11implimpl22api3.doSomething();
        visited = 1;
    }
}

