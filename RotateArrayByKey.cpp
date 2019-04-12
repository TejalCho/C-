#include<iostream>

using namespace std;

void rotate(int array[],int size){
    int temp = array[0];
    int i;    
    for(i=0;i<size-1;i++){
        array[i]=array[i+1];
    }
    array[i] = temp;
}

void rotateArray(int array[],int size, int key){
    int i;
    for(i=0;i<key;i++){
        rotate(array,size);
    }
}

void printArray(int array[], int size){
    int i;
    for(i=0;i<size;i++){
        cout<<array[i]<< " ";
    }
    cout<<endl;
}

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    int key = 3;
    //Expected Output = 4,5,6,7,8,9,1,2,3

    rotateArray(array,size,key);
    printArray(array,size);
    return 0;
}
