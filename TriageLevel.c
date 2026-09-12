# include <stdio.h>

int main(){

    float heart_rate, temp;

    printf("Enter your heart rate: ");
    scanf("%f", &heart_rate);
    printf("Enter your body temperature: ");
    scanf("%f", &temp);

    if (heart_rate > 120.0 || temp > 39.0){
        printf("Critical-Immediate Attention");
    }
    else if((heart_rate >= 100.0 || heart_rate <=120.0) && (temp >= 37.5 || temp <= 39.0)){
        printf("Urgent");
    }
    else{
        printf("Normal - Wait in Queue");
    }

    return 0;
    
}
