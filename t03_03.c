#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int value;
    int min = INT_MAX;
    int max = INT_MIN;

    double minAvg = 0.0;
    double maxAvg = 0.0;
    int prev;
    int havePrev = 0;

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &value) != 1) {
            break;
        }
        if (value < min) min = value;
        if (value > max) max = value;

        if (havePrev) {
            double avg = (prev + value) / 2.0;
            if (i == 1 || avg < minAvg) {
                minAvg = avg;
            }
            if (i == 1 || avg > maxAvg) {
                maxAvg = avg;
            }
        }
        prev = value;
        havePrev = 1;
    }

    /* output */
    if (min != INT_MAX) {
        printf("%d\n", min);
    }
    if (max != INT_MIN) {
        printf("%d\n", max);
    }
    if (havePrev && n >= 2) {
        printf("%.2f\n", minAvg);
        printf("%.2f\n", maxAvg);
    }

    return 0;
}