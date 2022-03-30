// GENERATED SOURCE FILE

#include "lib12api1_private.h"
#include "lib12api1_impl.h"
#include "lib13api1.h"
#include "lib12impl.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12api1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl27api24(int a, int b) {
    return a + b;
}

int Lib12Api1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl27Api2" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl27Impl lib12api1impl27impl;
        lib12api1impl27impl.doSomething();
        Lib12Api1Impl28Api1 lib12api1impl28api1;
        lib12api1impl28api1.doSomething();
        Lib12Api1Impl28Api2 lib12api1impl28api2;
        lib12api1impl28api2.doSomething();
        Lib12Api1Impl28Api3 lib12api1impl28api3;
        lib12api1impl28api3.doSomething();
        visited = 1;
    }
}

