//Example: Data Scaling (Normalizing to Range [0,1]);

#include <stdio.h>

int main() {
    int rawData[5] = {20, 35, 45, 60, 80}; // Raw data
    float scaledData[5]; // Array for scaled data
    int min = rawData[0], max = rawData[0];

    //Find the minimum and maximum values in the raw data
    for (int i = 1; i < 5; i++){
        if (rawData[i] < min){
            min = rawData[i];
        }
        if (rawData[i] > max){
            max = rawData[i];
        }
    }

    // Scale the data to the range [0,1]
    for (int i = 0; i < 5; i++){
        scaledData[i] = (float)(rawData[i] - min)/(max - min);
    }

    //Print the scaled data
    printf("Raw Data    Scaled Data\n");
    for (int i = 0; i < 5; i++){
        printf("%d            %.2f\n", rawData[i], scaledData[i]);
    }

    return 0;
}
