// GENERATED SOURCE FILE

#include "app_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl11impl_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl11impl_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl11impl_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl11impl_test4(int a, int b) {
    return a + b;
}

int AppImpl11ImplTest::visited = 0;

/*
 * Here is a function.
 */
void AppImpl11ImplTest::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl11ImplTest" << std::endl;
        visited = 1;
    }
}

