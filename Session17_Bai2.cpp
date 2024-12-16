#include <stdio.h>
#include <ctype.h>

void nhapChuoi(char *str);
void inChuoi(char *str);
int soLuongChu(char *str);
int soLuongSo(char *str);
int soLuongKyTuDacBiet(char *str);

int main(){
    char str[100];
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        getchar();
        switch (choice){
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", soLuongChu(str));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", soLuongSo(str));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", soLuongKyTuDacBiet(str));
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
void nhapChuoi(char *str){
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
}
void inChuoi(char *str) {
    printf("Chuoi vua nhap: %s\n", str);
}
int soLuongChu(char *str){
    int count=0;
    while (*str!='\0'){
        if (isalpha(*str)){
            count++;
        }
        str++;
    }
    return count;
}
int soLuongSo(char *str){
    int count = 0;
    while (*str!='\0'){
        if (isdigit(*str)){
            count++;
        }
        str++;
    }
    return count;
}
int soLuongKyTuDacBiet(char *str){
    int count=0;
    while (*str!='\0') {
        if (!isalnum(*str) && !isspace(*str)){
            count++;
        }
        str++;
    }
    return count;
}
