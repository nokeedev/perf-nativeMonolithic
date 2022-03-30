// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl16api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl16api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl16api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl16api34(int a, int b) {
    return a + b;
}

int Lib6Api3Impl16Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl16Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl16Api3" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl16Impl lib6api3impl16impl;
        lib6api3impl16impl.doSomething();
        Lib6Api3Impl17Api1 lib6api3impl17api1;
        lib6api3impl17api1.doSomething();
        Lib6Api3Impl17Api2 lib6api3impl17api2;
        lib6api3impl17api2.doSomething();
        Lib6Api3Impl17Api3 lib6api3impl17api3;
        lib6api3impl17api3.doSomething();
        visited = 1;
    }
}

