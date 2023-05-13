
// Identification
// probblems asking for kth smallest/largest
//maximun questions involves sorting
//




#include<iostream>
using namespace std;

void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = arr[temp];
}

void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i + 2;
    if(l<n && arr[l]>arr[largest])
    largest = i;

    if(r<n && arr[r]>arr[largest])
    largest = r;

    if(largest != i){
        swap(arr, i, largest);
        heapify(arr, n, largest);
    }
}

void heapBuild(int arr[], int n){
    for(int i = n/2 -1; i>=0; i--){
        heapify(arr, n, i);
    }
    
}

void heapsort(int arr[], int n, ){
    heapbuild(arr, n);
    for(int i = n-1; i>0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){

}