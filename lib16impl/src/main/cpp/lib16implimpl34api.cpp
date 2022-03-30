// GENERATED SOURCE FILE

#include "lib16impl_private.h"
#include "lib16impl_impl.h"
#include "lib16core1.h"
#include "lib16core2.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16implimpl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl34api4(int a, int b) {
    return a + b;
}

int Lib16ImplImpl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl34Api" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl34Core lib16implimpl34core;
        lib16implimpl34core.doSomething();
        visited = 1;
    }
}

