// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl11impl4(int a, int b) {
    return a + b;
}

int Lib2Core2Impl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl11Impl" << std::endl;
        Lib2Core2Impl11Core1 lib2core2impl11core1;
        lib2core2impl11core1.doSomething();
        Lib2Core2Impl11Core2 lib2core2impl11core2;
        lib2core2impl11core2.doSomething();
        Lib2Core2Impl12Api1 lib2core2impl12api1;
        lib2core2impl12api1.doSomething();
        Lib2Core2Impl12Api2 lib2core2impl12api2;
        lib2core2impl12api2.doSomething();
        Lib2Core2Impl12Api3 lib2core2impl12api3;
        lib2core2impl12api3.doSomething();
        visited = 1;
    }
}

