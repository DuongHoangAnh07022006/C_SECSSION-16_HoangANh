#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", (void*)&a);
    printf("Gia tri cua a thong qua ptr: %d\n", *ptr);
    printf("Dia chi cua a thong qua ptr: %p\n", (void*)ptr);

    return 0;
}

