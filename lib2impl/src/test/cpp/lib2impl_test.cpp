// GENERATED SOURCE FILE

#include "lib2impl_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2impl_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2impl_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2impl_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2impl_test4(int a, int b) {
    return a + b;
}

int Lib2ImplTest::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplTest::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplTest" << std::endl;
        visited = 1;
    }
}

