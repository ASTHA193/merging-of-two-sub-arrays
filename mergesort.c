#include<stdio.h>
int main()
{
    int arr1[5],arr2[4],arr3[9],i,temp=0;
    printf("\nEnter values for array1:");
    for(i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    printf("\nEnter values for array2:");
    for(i=0;i<4;i++)
        scanf("%d",&arr2[i]);
    printf("\nvalues of an array1: ");
    for(i=0;i<5;i++)
        printf("%d ",arr1[i]);
    printf("\nvalues of an array2: ");
    for(i=0;i<4;i++)
        printf("%d ",arr2[i]);
    for(i=0;i<=8;i++)
    {
        if(i<=4)
            arr3[i]=arr1[i];
        else
            arr3[i]=arr2[temp++];
    }
    printf("\nvalues of an array3:");
    for(i=0;i<=8;i++)
        printf("%d ",arr3[i]);

}
