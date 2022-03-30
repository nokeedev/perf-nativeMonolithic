// GENERATED SOURCE FILE

#include "lib1core2_private.h"
#include "lib1core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core2impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core2impl11impl4(int a, int b) {
    return a + b;
}

int Lib1Core2Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core2Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core2Impl11Impl" << std::endl;
        Lib1Core2Impl11Core1 lib1core2impl11core1;
        lib1core2impl11core1.doSomething();
        Lib1Core2Impl11Core2 lib1core2impl11core2;
        lib1core2impl11core2.doSomething();
        Lib1Core2Impl12Api1 lib1core2impl12api1;
        lib1core2impl12api1.doSomething();
        Lib1Core2Impl12Api2 lib1core2impl12api2;
        lib1core2impl12api2.doSomething();
        Lib1Core2Impl12Api3 lib1core2impl12api3;
        lib1core2impl12api3.doSomething();
        visited = 1;
    }
}

