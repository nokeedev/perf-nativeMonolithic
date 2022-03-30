// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl16impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl16Impl" << std::endl;
        Lib1Core2Impl16Core1 lib1core2impl16core1;
        lib1core2impl16core1.doSomething();
        Lib1Core2Impl16Core2 lib1core2impl16core2;
        lib1core2impl16core2.doSomething();
        Lib1Core2Impl17Api1 lib1core2impl17api1;
        lib1core2impl17api1.doSomething();
        Lib1Core2Impl17Api2 lib1core2impl17api2;
        lib1core2impl17api2.doSomething();
        Lib1Core2Impl17Api3 lib1core2impl17api3;
        lib1core2impl17api3.doSomething();
        visited = 1;
    }
}

