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
int lib12api1impl16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12api1impl16api34(int a, int b) {
    return a + b;
}

int Lib12Api1Impl16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Api1Impl16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Api1Impl16Api3" << std::endl;
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib12Impl lib12impl;
        lib12impl.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12Api1Impl16Impl lib12api1impl16impl;
        lib12api1impl16impl.doSomething();
        Lib12Api1Impl17Api1 lib12api1impl17api1;
        lib12api1impl17api1.doSomething();
        Lib12Api1Impl17Api2 lib12api1impl17api2;
        lib12api1impl17api2.doSomething();
        Lib12Api1Impl17Api3 lib12api1impl17api3;
        lib12api1impl17api3.doSomething();
        visited = 1;
    }
}

