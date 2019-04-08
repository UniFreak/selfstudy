#include <stdio.h>
#include <math.h>

int find(float a[], int n, float x) {
    int l, m, r;
    char flag = 'n';

    l = 1, r = n;
    while (l <= r) {
        m = (l + r) / 2;
        if (fabs(x - a[m-1]) < 1e-4) {
            flag = 'y';
            break;
        } else if (x < a[m-1]) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    if (flag == 'n') {
        m = 0;
    }
    return m;
}

void sort(float a[], int n) {
    int j, k;
    float x;
    for (k = 1; k < n; k++) {
        for (j = n-1; j >= k; j--) {
            if (a[j] < a[j-1]) {
                x = a[j];
                a[j] = a[j-1];
                a[j-1] = x;
            }
        }
    }
    return;
}


int main() {
    int n, i, p;
    float a[100], x;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    sort(a, n);
    scanf("%f", &x);
    p = find(a, n, x);
    if (p == 0) {
        printf("not found %f\n", x);
    } else {
        printf("found %f\n", x);
    }
}