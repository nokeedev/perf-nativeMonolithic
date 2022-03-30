// GENERATED SOURCE FILE

#include "lib3api1_private.h"
#include "lib3api1_impl.h"
#include "lib4api1.h"
#include "lib3impl.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api1impl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api1impl27impl4(int a, int b) {
    return a + b;
}

int Lib3Api1Impl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api1Impl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api1Impl27Impl" << std::endl;
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api1Impl27Core1 lib3api1impl27core1;
        lib3api1impl27core1.doSomething();
        Lib3Api1Impl27Core2 lib3api1impl27core2;
        lib3api1impl27core2.doSomething();
        Lib3Api1Impl28Api1 lib3api1impl28api1;
        lib3api1impl28api1.doSomething();
        Lib3Api1Impl28Api2 lib3api1impl28api2;
        lib3api1impl28api2.doSomething();
        Lib3Api1Impl28Api3 lib3api1impl28api3;
        lib3api1impl28api3.doSomething();
        visited = 1;
    }
}

