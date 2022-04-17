
#include<stdio.h>
//nice 
void merge(int a[], int l, int mid, int h) // nice2
{
   int i = l, j= mid+1, k = l,  temp[50];
//j
    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
            temp[k]= a[i];
            i++;
        }
        else
           {
            temp[k]= a[j];
            j++;
           }
        k++;

    }


    if(i>mid)
    {
        while (j<=h)
        {
            temp[k]= a[j];
            j++; k++;
        }
    }

    else
    {
        while(i<=mid){
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
    if(l<h)
    {
        mid = (l+h)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, h);
        merge(a, l, mid, h);

    }
}


int main()
{
    int a[50], aSize, i, low=0, high, mid;

    printf("How many number u want to sort?");
    scanf("%d", &aSize);

    printf("Enter all the elements: ");
    for(i=0; i<aSize; i++)
    {
        scanf("%d", &a[i]);
    }
    high= aSize-1;
    mergeSort(a, low, high);
    printf("here are all the sorted elements in Ascending order: \n");

    for(i=0; i<aSize; i++)
    {

        printf("  %d", a[i]);

    }


    return 0;
}
