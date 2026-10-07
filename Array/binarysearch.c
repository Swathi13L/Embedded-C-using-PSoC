

#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int low = 0;
    int high = 6;
    int mid;
    int n;
    int found = 0;

    printf("Enter the element to be searched: ");
    scanf("%d", &n);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == n)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }

        if(a[mid] < n)
        {
            low = mid + 1;
        }

        if(a[mid] > n)
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}