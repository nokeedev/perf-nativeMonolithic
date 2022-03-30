// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl20impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl20Impl" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl20Core1 lib14implimpl20core1;
        lib14implimpl20core1.doSomething();
        Lib14ImplImpl20Core2 lib14implimpl20core2;
        lib14implimpl20core2.doSomething();
        Lib14ImplImpl21Api1 lib14implimpl21api1;
        lib14implimpl21api1.doSomething();
        Lib14ImplImpl21Api2 lib14implimpl21api2;
        lib14implimpl21api2.doSomething();
        Lib14ImplImpl21Api3 lib14implimpl21api3;
        lib14implimpl21api3.doSomething();
        visited = 1;
    }
}

