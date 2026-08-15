#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solve(int arr[][2], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int have = arr[i][0];
        int need = arr[i][1];

        if (have < need) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    scanf("%d", &n);

    int (*arr)[2] = malloc(n * sizeof(*arr));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int res = solve(arr, n);

    if (res == 0) {
        printf("-1\n");
    }

    printf("%d\n", res);

    free(arr);

    return 0;
}