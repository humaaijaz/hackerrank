#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%i",&n);
    int size=2*n-1;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i]=n+1;
    }
    
    int m=0;
    for (int j = 0; j < size; j++)
    {
        for (int k = m; k < size-m; k++)
        {   
            if (j<=size/2)
            {
                arr[k]-=1;
            }
            else
            {
                arr[k]+=1;
            }
        }
        for (int l = 0; l < size; l++)
        {
            printf("%d ",arr[l]);
        }
        printf("\n");
        if (j<size/2)
        {
            m+=1;
        }
        else if (j>size/2)
        {
            m-=1;
        }
    }
    return 0;
}
