// C program to implement interpolation search
#include<stdio.h>

int interpolationSearch(int arr[], int n, int x)
{
   
    int lo = 0, hi = (n - 1);

  
    while (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {
        
        int pos = lo + (((double)(hi-lo) /
              (arr[hi]-arr[lo]))*(x - arr[lo]));

        if (arr[pos] == x)
            return pos;

        // If x is larger, x is in upper part
        if (arr[pos] < x)
            lo = pos + 1;

        // If x is smaller, x is in lower part
        else
            hi = pos - 1;
    }
    return -1;
}


int main()
{
   
    int arr[] =  {10, 12, 13, 16, 18, 19, 20, 21, 22, 23,
                  24, 33, 35, 42, 47};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("n=%d\n",n);

    int x = 18; // Element to be searched
    int index = interpolationSearch(arr, n, x);

    // If element was found
    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found.");
    return 0;
}
