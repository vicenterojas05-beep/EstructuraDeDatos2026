#include <vector>
#include <iostream>
#include <string>
using namespace std;

void intercambiar(int &a, int &b){

    int temp=a;
    a=b;
    b=temp;

}

void heapify(vector<int> &arr, int n, int i){

    int padre=i;
    int iz=2*i+1;
    int de=2*i+2;
    
    if(iz<n && arr[iz]>arr[padre]){
        padre=iz;
    }
    if(de<n && arr[de]>arr[padre]){
        padre=de;
    }

    if(padre!=i){
        intercambiar(arr[i],arr[padre]);

        heapify(arr,n,padre);
    }

}

void heapsort (vector<int> &arr){
    int n=arr.size();
    for (int i=n/2-1;i >=0;i--){
        heapify(arr,n,i);
    }

    for(int i=n-1; i>0;i--){

        intercambiar(arr[0],arr[i]);

        heapify(arr,i,0);
    }
}

void imprimir (vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    imprimir(arr);

    heapsort(arr);
    imprimir(arr);
    return 0;
}