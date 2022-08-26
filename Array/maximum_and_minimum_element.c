#include<stdio.h>
int main()
{
    int arr[100], i, n, max, min;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i= 0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("maximum element is %d\n", max);
    printf("minimum element is %d\n", min);

    return 0;
}
