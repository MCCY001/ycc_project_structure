#include <stdio.h>
#include <iostream>
#include "ycc_project_structure/ycc_project_structure.h"

int main() {
    int a = 20;
    int b = 12;
    int c = 5;
    printf("helloworld\n");
    printf("%d\n", OutsideAdd(a, b, c));
    printf("%f\n", OutsideMult(3.0, 4.0, 5.0));
    return 0;
}
