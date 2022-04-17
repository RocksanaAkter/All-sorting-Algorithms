
#include<stdio.h>

int main()
{
    int n, i, j, min, a[20], temp;

    printf("how many number u want to sort");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++)// (n-1) value passes|
    {
        min = i;
        for(j=i+1; j<n; j++) //find the smallest
        {
            if(a[j]<a[i])
            {
                min = j;

            }

        }
        if(min != i)
        {
            temp= a[i];
            a[i]= a[min];
            a[min]= temp;
        }
    }

    printf("Sorted element in ascending order: \n");
    for(i=0; i<n; i++)
    {
        printf(" %d", a[i]);
    }


    return 0;
}
