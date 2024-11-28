#include <stdio.h>
#include <math.h> // Thý vi?n h? tr? tính toán toán h?c

int main() {
    float a, b, c; 
    float delta, x1, x2; 

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);


    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vô so nghiem.\n");
            } else {
                printf("Phuong trinh vô nghiem.\n");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh có mot nghiem duy nhat: x = %.2f\n", x1);
        }
    } else {
     
        delta = b * b - 4 * a * c;

        if (delta > 0) {
      
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh có hai nghiem phân bi?t:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            // Nghi?m kép
            x1 = -b / (2 * a);
            printf("Phuong trinh có nghi?m kép: x = %.2f\n", x1);
        } else {
            // Vô nghi?m (delta < 0)
            printf("Phuong trinh vô nghi?m (không có nghi?m th?c).\n");
        }
    }

    return 0;
}

