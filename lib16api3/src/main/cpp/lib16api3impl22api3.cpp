// GENERATED SOURCE FILE

#include "lib16api3_private.h"
#include "lib16api3_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api3impl22api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl22api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl22api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl22api34(int a, int b) {
    return a + b;
}

int Lib16Api3Impl22Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl22Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl22Api3" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl22Impl lib16api3impl22impl;
        lib16api3impl22impl.doSomething();
        Lib16Api3Impl23Api1 lib16api3impl23api1;
        lib16api3impl23api1.doSomething();
        Lib16Api3Impl23Api2 lib16api3impl23api2;
        lib16api3impl23api2.doSomething();
        Lib16Api3Impl23Api3 lib16api3impl23api3;
        lib16api3impl23api3.doSomething();
        visited = 1;
    }
}

