#include<stdio.h>
int main()
{
    int arr[20], arr1[20];
    int n, i,j, count;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        arr1[i] = -1;
    }
    for(i = 0; i<n; i++)
    {
        count = 1;
        for(j = i+1; j<n; j++)
        {
            if(arr[i]== arr[j])
            {
                count++;
                arr1[j] = 0;
            }
        }
        if(arr1[i] != 0);
        {
            arr1[i] = count;
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr1[i]>1)
        {
            printf("\n%d", arr[i]);
        }
    }
}
