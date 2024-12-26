#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int  arr[], int n){
    for(int i=0; i<n; i++){
        int min = i; //ch?n ph?n t? ð?u làm nh? nh?t ð? so sánh v?i các ph?n t? sau 
        for(int  j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j; // tim phan tu nho  nhat
            }
        }
        //g?i hàm swap ð? ti?n hành ð?i ch? v?i 2 ph?n t?
        swap(&arr[min], &arr[i]);
    }
}
// in ra
void printfList(int arr[], int size){
    for(int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("nhap vao so luong phan tu");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
    printf("arr[%d] = ", i);
    scanf("%d",&arr[i]);
    }
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("mang ban dau: ");
    printfList(arr,size);

    selectionSort(arr,n);
    printf("Mang sau khi sap xep");
    printfList(arr,size);
    return 0;
}
