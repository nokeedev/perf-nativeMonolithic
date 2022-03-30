// GENERATED SOURCE FILE

#include "lib3core2_private.h"
#include "lib3core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core2impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core2impl11impl4(int a, int b) {
    return a + b;
}

int Lib3Core2Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core2Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core2Impl11Impl" << std::endl;
        Lib3Core2Impl11Core1 lib3core2impl11core1;
        lib3core2impl11core1.doSomething();
        Lib3Core2Impl11Core2 lib3core2impl11core2;
        lib3core2impl11core2.doSomething();
        Lib3Core2Impl12Api1 lib3core2impl12api1;
        lib3core2impl12api1.doSomething();
        Lib3Core2Impl12Api2 lib3core2impl12api2;
        lib3core2impl12api2.doSomething();
        Lib3Core2Impl12Api3 lib3core2impl12api3;
        lib3core2impl12api3.doSomething();
        visited = 1;
    }
}

