// GENERATED SOURCE FILE

#include "lib3impl_private.h"
#include "lib3impl_impl.h"
#include "lib3core1.h"
#include "lib3core2.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3implimpl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl12api34(int a, int b) {
    return a + b;
}

int Lib3ImplImpl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl12Api3" << std::endl;
        Lib3Core1 lib3core1;
        lib3core1.doSomething();
        Lib3Core2 lib3core2;
        lib3core2.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3ImplImpl12Impl lib3implimpl12impl;
        lib3implimpl12impl.doSomething();
        Lib3ImplImpl13Api1 lib3implimpl13api1;
        lib3implimpl13api1.doSomething();
        Lib3ImplImpl13Api2 lib3implimpl13api2;
        lib3implimpl13api2.doSomething();
        Lib3ImplImpl13Api3 lib3implimpl13api3;
        lib3implimpl13api3.doSomething();
        visited = 1;
    }
}
