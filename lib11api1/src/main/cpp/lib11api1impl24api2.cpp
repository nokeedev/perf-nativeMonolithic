// GENERATED SOURCE FILE

#include "lib11api1_private.h"
#include "lib11api1_impl.h"
#include "lib12api1.h"
#include "lib11impl.h"
#include "lib12api2.h"
#include "lib12api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11api1impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11api1impl24api24(int a, int b) {
    return a + b;
}

int Lib11Api1Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Api1Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Api1Impl24Api2" << std::endl;
        Lib12Api1 lib12api1;
        lib12api1.doSomething();
        Lib11Impl lib11impl;
        lib11impl.doSomething();
        Lib12Api2 lib12api2;
        lib12api2.doSomething();
        Lib12Api3 lib12api3;
        lib12api3.doSomething();
        Lib11Api1Impl24Impl lib11api1impl24impl;
        lib11api1impl24impl.doSomething();
        Lib11Api1Impl25Api1 lib11api1impl25api1;
        lib11api1impl25api1.doSomething();
        Lib11Api1Impl25Api2 lib11api1impl25api2;
        lib11api1impl25api2.doSomething();
        Lib11Api1Impl25Api3 lib11api1impl25api3;
        lib11api1impl25api3.doSomething();
        visited = 1;
    }
}
