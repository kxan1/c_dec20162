#include <stdio.h>

int main() {
    int age[6];

    printf("Enter the age of 6 children: ");

    // taking input and storing it in an array
    for(int i = 0; i < 6; ++i) {
        scanf("%d", &age[i]);
    }

    printf("Displaying children ages");

    // printing elements of an array
    for (int i = 0; i< 6; ++i) {
        printf("%d\n", age[i]);
    }
    return 0;
}
