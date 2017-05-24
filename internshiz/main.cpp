#include <iostream>
using namespace std;

void swap (int *xp, int *yp)
{
	int x, y;
	int temp= *xp;
	x=*yp;
	y=temp;

}

void insertionsort (int arr[], int n){
    int key;
	for(int j=1;j<n;j++){
        key=arr[j];
        int i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
	}

}
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main(){
	int x[]={17,26,04,11,3,36,4564,14,67,31,564,482};
	int n = sizeof(x)/sizeof(x[0]);
	insertionsort(x, n);
	printArray(x, n);
	printf("%d", n);
}
