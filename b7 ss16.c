#include <stdio.h>
void sapXep(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int tam = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tam;
            }
        }
    }
}
int main() {
    int mang[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(mang) / sizeof(mang[0]);
    sapXep(mang, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    return 0;
}

