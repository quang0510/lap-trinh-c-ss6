#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    float delta, x1, x2;

    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);
    printf("nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("day khong phai phuong trinh bac 2\n");
    } else {
       
        delta =(b*b)-(4*a*c);

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("phuong trinh co hai nghiem phan biet: x1 = %f và x2 = %f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("phuong trinh co nghiem kep: x1 = x2 = %f\n", x1);
        } else {
            printf("phuong trinh vo nghiem do delta<0 \n");
        }
    }

    return 0;
}

