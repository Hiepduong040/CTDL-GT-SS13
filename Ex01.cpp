#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int array[], int n){
    for(int i = 0; i < n - 1;i++){
            int swapped = 0;            
        for(int j = 0; j < n - i - 1;j++){
            if(array[j] > array[ j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapped = 1;
            }
        }  
        if(swapped == 0){
            break;
           }
        }
    }
    void printfList(int array[], int size){
        for(int i =0; i<size; i++){
            printf("%d ", array[i]);
        }
    }
int main(){
    int n;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    int size;
    size = sizeof(array) / sizeof(array[0]) ;
    printf("Mang ban dau: ");
    printfList(array,size);

    bubbleSort(array,n);
    printf("\n Mang sau khi sap xep la: ");
    printfList(array,size);
    return 0;
}
