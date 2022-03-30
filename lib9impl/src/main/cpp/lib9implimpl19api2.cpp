// GENERATED SOURCE FILE

#include "lib9impl_private.h"
#include "lib9impl_impl.h"
#include "lib9core1.h"
#include "lib9core2.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9implimpl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl19api24(int a, int b) {
    return a + b;
}

int Lib9ImplImpl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl19Api2" << std::endl;
        Lib9Core1 lib9core1;
        lib9core1.doSomething();
        Lib9Core2 lib9core2;
        lib9core2.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9ImplImpl19Impl lib9implimpl19impl;
        lib9implimpl19impl.doSomething();
        Lib9ImplImpl20Api1 lib9implimpl20api1;
        lib9implimpl20api1.doSomething();
        Lib9ImplImpl20Api2 lib9implimpl20api2;
        lib9implimpl20api2.doSomething();
        Lib9ImplImpl20Api3 lib9implimpl20api3;
        lib9implimpl20api3.doSomething();
        visited = 1;
    }
}

