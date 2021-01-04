#include <stdio.h>
#include "libraryFuction.h"
#define LINE 256

void shift_element(int *arr, int i) {
    if(i < 0 || arr == NULL){
		return;
    }
    int t1,t2;
    t1 = *arr;
    for(int j = 1; j <= i; j++){
        t2 = *(arr+j);
        *(arr+j) = t1;
        t1 = t2;
    }
    *arr = t1;
    
}

void insertion_sort(int* arr , int len){
    if(len <= 0 || arr == NULL){
		return;
	}
   int i,j;
    for(i = 1 ; i < len ; i++){
    for(j = i ; j > 0 ; j-- ){
        if(*(arr+j-1) > *(arr+j))
        shift_element(arr+j-1,1);
    }
    
  }
}
