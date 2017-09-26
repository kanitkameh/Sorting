#include<stdio.h>
#include <stdbool.h>
int N; //declare variable globally

void printArray(int n[]);
void readArray(int n[]);
void bubbleSortArray(int n[]);
void selectionSortArray(int n[]);
void insertionSortArray(int n[]);
void swap(int *n1, int *n2);

int main(){
    scanf("%d",&N);
    int n[N];
    readArray(n);

    selectionSortArray(n);
    printArray(n);
    return 0;
}
void printArray(int n[]){
    for(int i=0;i<N;i++){
        printf("%d ",n[i]);
    }
}
void readArray(int n[]){
    for(int i=0;i<N;i++){
        scanf("%d",&n[i]);
    }
}
void bubbleSortArray(int n[]){
    int indexOfLastUnsortedElement = N;
    bool swapped;
    do{
        swapped = false;
        for(int i=0;i<indexOfLastUnsortedElement-1;i++){
            if(n[i]>n[i+1]){
                swap(&n[i],&n[i+1]);
                swapped = true;
            }
        }
        indexOfLastUnsortedElement--;
    }while(swapped);
}
void selectionSortArray(int n[]){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(n[j]<n[i]){
                swap(&n[j],&n[i]);
            }
        }
    }
}
void insertionSortArray(int n[]){

}
void swap(int *n1, int *n2){
    int swap = *n1;
    *n1=*n2;
    *n2=swap;
}
