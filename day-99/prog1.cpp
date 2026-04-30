//0/1 knapsack
#include <iostream>
#include <vector>
using namespace std;
int v[20][20];
int max1(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int i, j, w[20], p[20], n, max;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter the weight & profit of item %d: ", i);
        scanf("%d %d", &w[i], &p[i]);
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%d", &max);

    for (i = 0; i <= n; i++)
        v[i][0] = 0;

    for (j = 0; j <= max; j++)
        v[0][j] = 0;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= max; j++) {
            if (w[i] > j) {
                v[i][j] = v[i - 1][j];
            } else {
                v[i][j] = max1(v[i - 1][j], v[i - 1][j - w[i]] + p[i]);
            }
        }
    }
    printf("\nThe table is:\n");
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= max; j++) {
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }

    printf("\nThe maximum profit is: %d", v[n][max]);
    printf("\nThe most valuable subset is: {");
    j = max;
    for (i = n; i >= 1; i--) {
        if (v[i][j] != v[i - 1][j]) {
            printf(" item %d ", i);
            j = j - w[i];
        }
    }
    printf("}\n");
    return 0;
}

