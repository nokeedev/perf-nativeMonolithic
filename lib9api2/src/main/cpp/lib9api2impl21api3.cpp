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
int lib9api2impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9api2impl21api34(int a, int b) {
    return a + b;
}

int Lib9Api2Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Api2Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Api2Impl21Api3" << std::endl;
        Lib9Impl lib9impl;
        lib9impl.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9Api2Impl21Impl lib9api2impl21impl;
        lib9api2impl21impl.doSomething();
        Lib9Api2Impl22Api1 lib9api2impl22api1;
        lib9api2impl22api1.doSomething();
        Lib9Api2Impl22Api2 lib9api2impl22api2;
        lib9api2impl22api2.doSomething();
        Lib9Api2Impl22Api3 lib9api2impl22api3;
        lib9api2impl22api3.doSomething();
        visited = 1;
    }
}

