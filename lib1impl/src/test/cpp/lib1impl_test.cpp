// GENERATED SOURCE FILE

#include "lib1impl_test.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1impl_test1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1impl_test2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1impl_test3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1impl_test4(int a, int b) {
    return a + b;
}

int Lib1ImplTest::visited = 0;

/*
 * Here is a function.
 */
void Lib1ImplTest::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1ImplTest" << std::endl;
        visited = 1;
    }
}
