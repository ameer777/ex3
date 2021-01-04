#include<stdio.h>
#include"libraryFuction.h"

#define length 50
int main() {
    
    
    int arr[length];
    
    for(int i =0 ; i < length; i++){
        int x = 0;
        scanf("%d",&x);
        *(arr+i) = x;
    }
    
    insertion_sort(arr,length);
    for(int i =0 ; i < length; i++){
        if(i < length - 1)
         printf("%d,",*(arr + i));
         else printf("%d",*(arr + i));
    }
}
