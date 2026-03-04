#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0; // no valid input
    }

    int value;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &value) != 1) {
            break;
        }
        if (value < min) min = value;
        if (value > max) max = value;
    }

    /* output */
    if (min != INT_MAX) {
        printf("%d\n", min);
    }
    if (max != INT_MIN) {
        printf("%d\n", max);
    }

    return 0;
}