#include<stdio.h>

void merge(int a[], int l, int mid, int h)
{
    int i = l, j= mid+1, k = l, temp[50];

    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
            temp[k]= a[j];
            j++;


        }
        else
        {
            temp[k]= a[i];
            i++;


        }
        k++;

    }


    if(i>=mid)
    {
        while (j<=h)
        {
            temp[k]= a[j];
            j++;
            k++;

        }
    }

    else
    {
        while(i<=mid)
        {
            temp[k]= a[i];
            i++;
            k++;

        }
    }

    for(i = l; i<=h; i++)
    {
        a[i]= temp[i];
    }
}

void mergeSort(int a[], int l, int h)
{
    int mid;
    printf("\n");
    printf( "l %d h %d", l, h);
    printf("\n");

    if(l<h)
    {
        mid = (l+h)/2;
        printf (" value of mid %d nd mid+1 %d", mid, mid+1);
        mergeSort(a, l, mid);
        printf (" value of mid %d nd mid+1 %d", mid, mid+1);
        mergeSort(a, mid+1, h);
        merge(a, l, mid, h);

    }




}


int main()
{
    int a[50], aSize, i, low=0, high, mid;//low = 1

    printf("How many number u want to sort?");
    scanf("%d", &aSize);

    printf("Enter all the elements: ");
    for(i=0; i<aSize; i++)
    {
        scanf("%d", &a[i]);
    }
    high= aSize-1; // h = aSiza
    mergeSort(a, low, high);
    printf("here are all the sorted elements in Descending order: \n");

    for(i=0; i<aSize; i++)
    {

        printf("  %d", a[i]);

    }


    return 0;
}

