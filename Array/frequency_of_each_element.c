#include<stdio.h>
int main()
{
    int arr[20], arr1[20], i, j,n, count;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        arr1[i] = -1;
    }
    for(i = 0; i<n; i++)
    {
        count= 1;
        for(j= i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr1[j] = 0;

            }
        }
        if(arr1[i]!= 0)
        {
            arr1[i] = count;
        }

    }
    for(i = 0; i<n; i++)
    {
        if(arr1[i]!= 0)
        {
            printf("%d is occurs in %d times\n",arr[i], arr1[i] );

        }
    }

    return 0;

}
