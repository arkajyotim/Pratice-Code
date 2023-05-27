//average of 5 numbers 

#include <stdio.h>

int main() {
    int marks[5] = {12, 32, 45, 13, 19};
    int sum = 0;
    float average = 0.0;

    for (int i = 0; i < 5; i++) {
        sum = sum + marks[i];
    }

    average = sum / 5.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}


