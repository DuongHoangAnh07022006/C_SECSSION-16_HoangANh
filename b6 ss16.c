#include <stdio.h>
int timKiem(int *arr, int giaTri) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}
int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};
    int giaTri = 7;
    int viTri = timKiem(mang, giaTri);
    printf("Vi tri cua %d trong mang la: %d\n", giaTri, viTri);
    return 0;
}

