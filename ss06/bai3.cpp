#include <stdio.h>
#include <string.h> 

int main() {
    char matKhauDung[] = "123456"; 
    char matKhauNguoiNhap[50];     

    printf("Vui long nhap mat khau: ");
    scanf("%s", matKhauNguoiNhap);

    if (strcmp(matKhauDung, matKhauNguoiNhap) == 0) {
        printf("Mat khau chinh xac!\n");
    } else {
        printf("Mat khau sai\n");
    }
    return 0;
}

