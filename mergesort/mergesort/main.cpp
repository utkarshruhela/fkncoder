//
//  main.cpp
//  internshiz
//
//  Created by Utkarsh Ruhela on 21/05/17.
//  Copyright © 2017 Utkarsh Ruhela. All rights reserved.
//

#include <iostream>

void merge(int arr[], int l, int m, int r){
    int i,j;
    int n1=m-l+1, n2= r-m;
    int L[n1], R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[i+l];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+j+1];
    }
    //merge the arrays back together
    int k=l;
    i=0, j=0;
    while(i<n1 && j<n2){
        if(L[i]>R[j]){
            arr[k]=R[j];
            j++;
        }
        else{
            arr[k]=L[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r){
    if(l<r){
        int m= l+(r-l)/2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        merge(arr, l, m,r);
    }
}


void printarray(int A[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main(int argc, const char * argv[]) {
    int arr[] ={8,133,231,765,37,23,5784,3552};
    int arr_size= sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, arr_size-1);
    printarray(arr, arr_size);
    
}
