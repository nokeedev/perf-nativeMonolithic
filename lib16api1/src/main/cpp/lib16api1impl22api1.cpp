// GENERATED SOURCE FILE

#include "lib16api1_private.h"
#include "lib16api1_impl.h"
#include "lib17api1.h"
#include "lib16impl.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl22api14(int a, int b) {
    return a + b;
}

int Lib16Api1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl22Api1" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl23Api1 lib16api1impl23api1;
        lib16api1impl23api1.doSomething();
        Lib16Api1Impl22Impl lib16api1impl22impl;
        lib16api1impl22impl.doSomething();
        Lib16Api1Impl23Api2 lib16api1impl23api2;
        lib16api1impl23api2.doSomething();
        Lib16Api1Impl23Api3 lib16api1impl23api3;
        lib16api1impl23api3.doSomething();
        visited = 1;
    }
}

