#include <stdio.h>

typedef struct Complex{

    int real;
    int imaginary;

} complex;

int main(){

    complex c1;

    printf("Enter real part of complex number: ");
    scanf("%d", &c1.real);
    printf("Enter imaginary part of complex number: ");
    scanf("%d", &c1.imaginary);

    struct Complex *ptr = &c1;

    printf("Real: %d\n", ptr->real);
    printf("Imaginary: %d", ptr->imaginary);

    return 0;

}

