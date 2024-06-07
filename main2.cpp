/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define max 4
using namespace std;

struct queue{
    int item[max];
    int count;
    int front;
    int rear;
    
};

queue antrian;

void inisiasi(queue* q){
    q->count = 0;
    q->front = 0;
    q->rear = 0;
}

int isEmpty(queue* q){
    int hasil =0;
    if (q->count==0){
        hasil = 1;
    }
    return hasil;
}

int isFull(queue* q){
    int hasil =0;
    if (q->count==max){
        hasil = 1;
    }
    return hasil;
}

void print(queue *q) {
    if (isEmpty(q)) {
        cout<<"kosong";
    } else {
        cout<<"Isi antrian: ";
        int i = q->front;
        for (int j = 0; j < q->count; j++) {
            cout<<(q->item[i])<<" ";
            i = (i + 1) % max;
        }
        cout<<endl;
    }
}

void insert(queue *q, int data){
    cout<<"masukan "<<data<<endl;
    if(isFull(&antrian)==1){
        cout<<"Maaf sudah penuh"<<endl;
    } else {
        q->item[q->rear]=data;
        q->rear=(q->rear+1)%max;
        ++(q->count);
    }

    print(q);
}

void hapus(queue *q){
    cout<<"menghapus "<<q->item[q->front]<<" dari antrian"<<endl;
    if(isEmpty(&antrian)==1){
        cout<<"Kosong Ngab";
    } else {
        q->item[q->rear]=0;
        q->front=(q->front+1)%max;
        --(q->count);
    }
    print(q);
} 



int main()
{
    
    inisiasi(&antrian);
    insert(&antrian,108);
    insert(&antrian,109);
    insert(&antrian,110);
    insert(&antrian,111);
    hapus(&antrian);
    insert(&antrian,112);
   // print(&antrian);

    return 0;
}
