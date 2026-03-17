#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    if (n == 0) return 0;

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;
    if (k < 0) k = k + n;

    for(int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}