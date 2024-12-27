#include <ctype.h>
#include <stdio.h>

#define LEN 100

void selection_sort(int a[], int n);

int main(void)
{
    int n = 0, array[LEN];

    printf("Enter a series of integers (Enter a non-integer to end): ");
    for (int i = 0; i < LEN; i++) {
        if (scanf(" %d", &array[i]) != 1)
            break;
        n++;
    }

    selection_sort(array, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf(" %d", array[i]);
    printf("\n");

	return 0;
}

void selection_sort(int a[], int n)
{
    int lar = 0, temp, count;

    if (n == 0)
        return;

    for (int i = 0; i < n; i++) {
        if (a[i] > lar)
        {
            lar = a[i];
            count = i;
        }
    }

    temp = a[n - 1];
    a[count] = temp;
    a[n - 1] = lar;

    selection_sort(a, n - 1);
}
