#include<stdio.h>
int main()
{
    int arr[10], arr1[10], arr2[10], i,j=0,k=0, n;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            arr1[j] = arr[i];
            j++;
        }
        else{
            arr2[k] = arr[i];
            k++;
        }
    }

    for(i = 0; i<j; i++)
    {
        printf("Even numbers are %d\n", arr1[i]);
    }

    for(i = 0; i<k; i++)
    {
        printf("Odd numbers are %d\n", arr2[i]);
    }

    return 0;
}
