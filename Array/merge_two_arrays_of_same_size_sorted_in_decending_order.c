#include<stdio.h>
int main()
{
    int arr[20], arr1[20],arr2[40], i, j,k, n, n1,n2;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n1);
    for(i = 0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    n2 = n+n1;
    for(i =0; i<n; i++)
    {
        arr2[i]= arr[i];
    }
    for(j =0; j<n1; j++)
    {
        arr2[i]= arr1[j];
        i++;
    }

    for(i =0; i<n2; i++)
    {
        for(k =0; k<n2-1; k++)
        {
            if(arr2[k]<=arr2[k+1])
            {
                j = arr2[k+1];
                arr2[k+1] = arr2[k];
                arr2[k] = j;
            }

        }
    }

    for( i = 0; i<n2; i++)
    {
        printf("%d", arr2[i]);
    }
   return 0;

}
