#include <iostream>
using namespace std;

void cetak(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void urut(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    } 
}



int main(){
    int arr[6];
    cout<<"masukan data: ";
    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }

    urut(arr,6);
    cetak(arr,6);
    
}
