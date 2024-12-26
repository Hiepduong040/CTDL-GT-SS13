#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int swapped = 0;
        for(int j = 0; j < n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}

void printfList(int arr[], int size){
    for(int i=0; i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int binarySearch(int arr[], int size , int target){
    int low = 0;
    int high = size - 1;
    
    while(low <= high){
        int mid = low + (high - low) / 2; // tinh chi muc o  giua
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr,n);
    printf("mang sau khi sap xep la");
    printfList(arr,size);
    int target;
    printf("Nhap vao phan tu can tim kiem: ");
    scanf("%d",&target);
    int result = binarySearch(arr, size, target);
    if(result != -1){
        printf("Phan tu %d duoc tim thay o chi muc %d", target, result);
    }else{
        printf("Khong tim thay phan tu %d", target);
    }
    return 0;
}
