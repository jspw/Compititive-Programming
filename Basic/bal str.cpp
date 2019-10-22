#include<stdio.h>


void getPair(int* a, string* b) {
    // Check that these are not pointing to NULL
    assert(a);
    assert(b);
    *a = 1;
    *b = getString();
}

void foo() {
    int a, b;
    getPair(&a, &b);
}
}
