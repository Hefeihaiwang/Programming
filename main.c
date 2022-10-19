//
//  main.c
//  Binary Search
//
//  Created by 合肥海王 on 2022/10/19.
//

#include <stdio.h>

void Binarysearch(int mark, int *arr, int length)
{
    int mid=0;
    int left=0;
    int right=length-1;
    if(mark<arr[left] || mark>arr[right])
    {
        printf("Number is not in the array.\n");
    }
    else
    {
        while(left<=right)
        {
            mid=(left+right)/2;
            if(mark==arr[mid])
            {
                printf("Number is found at location %d\n", mid+1);
                break;
            }
            else if(mark>arr[mid])
            {
                left=mid+1;
            }
            else if(mark<arr[mid])
            {
                right=mid-1;
            }
            if (left>right)
                printf("Number is not in the array.\n");
        }
    }
    
}
int main( )
{
    int length=0;
    int arr[length];
    int i=0;
    int mark=0;
    printf("Please enter the length of your array:");
    scanf("%d", &length);
    for(i=0; i<length; i++)
    {
        printf("Please enter the No.%d number of your array", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Please enter the number you want to search:");
    scanf("%d", &mark);
    Binarysearch(mark, arr, length);
    return 0;
}
