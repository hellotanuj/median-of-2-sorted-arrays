#include <stdio.h>

int main() 
{
    int m, n, i, j;


    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }


    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int max = m + n;
    int merge[max];
    int a = 0, b = 0, c = 0;


    while (b < m && c < n) {
        if (nums1[b] < nums2[c]) {
            merge[a] = nums1[b];
            b++;
        } else {
            merge[a] = nums2[c];
            c++;
        }
        a++;
    }


    while (b < m) {
        merge[a] = nums1[b];
        b++;
        a++;
    }

    while (c < n) {
        merge[a] = nums2[c];
        c++;
        a++;
    }

    if (max % 2 != 0) {
        printf("Median: %lf\n", (double)merge[(max / 2)]);
    } else {
        printf("Median: %lf\n", ((merge[max / 2 - 1] + merge[max / 2]) / 2.0));
    }

    return 0;
}
