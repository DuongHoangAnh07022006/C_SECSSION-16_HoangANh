#include <stdio.h>
void hoanDoi(int *x, int *y) {
    int tam = *x;
    *x = *y;
    *y = tam;
}
int main() {
    int so1 = 5, so2 = 10;
    printf("Truoc khi doi: so1 = %d, so2 = %d\n", so1, so2);
    hoanDoi(&so1, &so2);
    printf("Sau khi doi: so1 = %d, so2 = %d\n", so1, so2);
    return 0;
}

