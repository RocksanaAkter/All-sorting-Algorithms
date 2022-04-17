#include<stdio.h>
// 8, 2 , 4, 1, 3
int main()
{
    int temp, i, a[20], j, n;

    printf("NUmber of inputs");
    scanf("%d", &n);

    for(i=0 ; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
// example of i = 3 ;
    for(i= 1; i<n; i++)// i =3, [2, 4, 8, 1, 3]
    {
        j= i-1; //j=2
        temp = a[i];// value = 1

        while(temp<a[j] && j>=0) // 2nd time , j= 1// 3rd, j =0
        {
            a[j+1]= a[j]; //a[3] = a[2] -> 8// a[2] ->a[1] -> 4 // a[1] -> a[0] -> 2;
            j--;// 1//0 //-1
        }
        a[j+1]= temp;// a[-1+1 = 0] = temp = value 1; so for i = 3 , the sorting, 1, 2, 4, 8, 3
    }

    printf("final sort: \n");
    for(i=0 ; i<n; i++)
    {
        printf("  %d", a[i]);
    }


    return 0;
}

