// GENERATED SOURCE FILE

#include "lib3api2_private.h"
#include "lib3api2_impl.h"
#include "lib3impl.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3api2impl17api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl17api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl17api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3api2impl17api34(int a, int b) {
    return a + b;
}

int Lib3Api2Impl17Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3Api2Impl17Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Api2Impl17Api3" << std::endl;
        Lib3Impl lib3impl;
        lib3impl.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3Api2Impl17Impl lib3api2impl17impl;
        lib3api2impl17impl.doSomething();
        Lib3Api2Impl18Api1 lib3api2impl18api1;
        lib3api2impl18api1.doSomething();
        Lib3Api2Impl18Api2 lib3api2impl18api2;
        lib3api2impl18api2.doSomething();
        Lib3Api2Impl18Api3 lib3api2impl18api3;
        lib3api2impl18api3.doSomething();
        visited = 1;
    }
}

