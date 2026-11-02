#include <stdio.h>

int MaxHeightGain(int Heights[], int size){
    int max_gain = 0;
    int current_gain = 0;
    int i;

    for(i = 0; i < size; i++){
        if(Heights[i] < Heights[i + 1]){
            current_gain += Heights[i + 1] - Heights[i];
        }
        else if(current_gain > max_gain){
            max_gain = current_gain;
            current_gain = 0;
        }
    }

    if(current_gain > max_gain){
        max_gain = current_gain;
    }

    return max_gain;

}

int main(){

    int n, i;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    int Heights[n];

    for(i = 0; i < n; i++){
        printf("Enter data for Index %d: ", i);
        scanf("%d", &Heights[i]);
    }

    int result = MaxHeightGain(Heights, n);
    printf("Maximum Total Height gain is: %d", result);

    return 0;

}