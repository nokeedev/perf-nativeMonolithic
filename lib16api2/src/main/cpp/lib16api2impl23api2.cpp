// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl23api24(int a, int b) {
    return a + b;
}

int Lib16Api2Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl23Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl23Impl lib16api2impl23impl;
        lib16api2impl23impl.doSomething();
        Lib16Api2Impl24Api1 lib16api2impl24api1;
        lib16api2impl24api1.doSomething();
        Lib16Api2Impl24Api2 lib16api2impl24api2;
        lib16api2impl24api2.doSomething();
        Lib16Api2Impl24Api3 lib16api2impl24api3;
        lib16api2impl24api3.doSomething();
        visited = 1;
    }
}
