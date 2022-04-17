
#include<stdio.h>

int  main()
{
    int a[20], i, j, temp, n;

    printf("How many elements u want to sort: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=1; j<n; j++)
        {
            if(a[j]<a[j-1])
            {
                temp = a[j-1];
                a[j-1]= a[j];
                a[j]= temp;
            }
        }
    }

    printf("Here are all the sorted elements in ascending order : \n");
    for(i=0; i<n; i++)
    {
        printf("  %d", a[i]);
    }



    return 0;
}
