// GENERATED SOURCE FILE

#include "lib4api2_private.h"
#include "lib4api2_impl.h"
#include "lib4impl.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4api2impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4api2impl18api34(int a, int b) {
    return a + b;
}

int Lib4Api2Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Api2Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Api2Impl18Api3" << std::endl;
        Lib4Impl lib4impl;
        lib4impl.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4Api2Impl18Impl lib4api2impl18impl;
        lib4api2impl18impl.doSomething();
        Lib4Api2Impl19Api1 lib4api2impl19api1;
        lib4api2impl19api1.doSomething();
        Lib4Api2Impl19Api2 lib4api2impl19api2;
        lib4api2impl19api2.doSomething();
        Lib4Api2Impl19Api3 lib4api2impl19api3;
        lib4api2impl19api3.doSomething();
        visited = 1;
    }
}

