#include <stdio.h>
void capNhatPhanTu(int *arr, int giaTriMoi, int viTri) {
    arr[viTri] = giaTriMoi;
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int viTri = 2;
    int giaTriMoi = 10;
    int n = sizeof(mang) / sizeof(mang[0]);
    capNhatPhanTu(mang, giaTriMoi, viTri);
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    return 0;
}

