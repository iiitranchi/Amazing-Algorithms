#include <stdio.h>

/* Sorting of an array using bubble sort */

int main()
{
    int n,i,j,k,l;
    printf("Enter number of elements to be sorted: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(j=0;j<n-1;j++){
        for(k=0;k<n-j-1;k++){
            if(arr[k]>arr[k+1]){
                arr[k]=arr[k]+arr[k+1];
                arr[k+1]=arr[k]-arr[k+1];
                arr[k]=arr[k]-arr[k+1];
            }
        }
   }

    printf("The sorted array is: ");
    for(l=0;l<n;l++)
    printf("%d\n",arr[l]);
}
