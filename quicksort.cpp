#include<iostream>
using namespace std;
int partition(int arr[],int low,int high);
void quicksort(int arr[],int low,int high);
void disparray(int arr[],int n);

main(){
    int arr[8]={12,54,2,7,8,99,22,34};
    int n = 8;
    int low = 0;
    int high = n-1;
    quicksort(arr,low,high);
    disparray(arr,n);
}

int partition(int arr[],int low,int high){
    int i,j,temp;
    int pivot = arr[high];
    i = low-1 ;

    for(j = low;j<= high-1;j++){
        if(arr[j]<=pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int piv = partition(arr,low,high);

        quicksort(arr,low,piv-1);
        quicksort(arr,piv+1,high);
    }
}

void disparray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}