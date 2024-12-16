#include <stdio.h>
void tinhTong(int *x, int *y, int *ketQua) {
    *ketQua = *x + *y;
}
int main() {
    int so1 = 5, so2 = 10, ketQua;
    tinhTong(&so1, &so2, &ketQua);
    printf("Tong cua %d va %d la: %d\n", so1, so2, ketQua);
    return 0;
}

