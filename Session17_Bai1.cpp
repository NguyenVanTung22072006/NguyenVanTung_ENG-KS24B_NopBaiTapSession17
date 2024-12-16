#include <stdio.h>

void nhapPT(int arr[], int *size);
void hienThiArray(int arr[], int size);
int arrayLength(int size);
int arraySum(int arr[], int size);
int findMax(int arr[], int size);

int main(){
    int arr[100];
    int size = 0;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                nhapPT(arr, &size);
                break;
            case 2:
                hienThiArray(arr, size);
                break;
            case 3:
                printf("Do dai mang: %d\n", arrayLength(size));
                break;
            case 4:
                printf("Tong cac phan tu trong mang: %d\n", arraySum(arr, size));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang: %d\n", findMax(arr, size));
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Khong co lua chon nay\n");
        }
    } while(1);

    return 0;
}
void nhapPT(int arr[], int *size){
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", size);
    for(int i=0; i<*size; i++){
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void hienThiArray(int arr[], int size){
    if(size==0){
        printf("Mang rong\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arrayLength(int size){
    return size;
}
int arraySum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int findMax(int arr[], int size){
    if(size==0){
	return -1;
    }
    int max=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}
