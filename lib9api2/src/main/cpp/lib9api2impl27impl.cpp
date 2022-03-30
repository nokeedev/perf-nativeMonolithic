// GENERATED SOURCE FILE

#include "lib9api2_private.h"
#include "lib9api2_impl.h"
#include "lib9impl.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9api2impl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl27impl4(int a, int b) {
    return a + b;
}

int Lib9Api2Impl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl27Impl" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl27Core1 lib9api2impl27core1;
        lib9api2impl27core1.doSomething();
        Lib9Api2Impl27Core2 lib9api2impl27core2;
        lib9api2impl27core2.doSomething();
        Lib9Api2Impl28Api1 lib9api2impl28api1;
        lib9api2impl28api1.doSomething();
        Lib9Api2Impl28Api2 lib9api2impl28api2;
        lib9api2impl28api2.doSomething();
        Lib9Api2Impl28Api3 lib9api2impl28api3;
        lib9api2impl28api3.doSomething();
        visited = 1;
    }
}

