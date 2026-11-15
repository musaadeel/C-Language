#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Enter n for memory size allocation: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }

    return 0;

}