#include <stdio.h>
#include <string.h>

// Function for relay band converter
int convertColorBand(char *color) {
    if (strcmp(color, "black") == 0) {
        return 0;
    } else if (strcmp(color, "brown") == 0) {
        return 1;
    } else if (strcmp(color, "red") == 0) {
        return 2;
    } else if (strcmp(color, "orange") == 0) {
        return 3;
    } else if (strcmp(color, "yellow") == 0) {
        return 4;
    } else if (strcmp(color, "green") == 0) {
        return 5;
    } else if (strcmp(color, "blue") == 0) {
        return 6;
    } else if (strcmp(color, "violet") == 0) {
        return 7;
    } else if (strcmp(color, "grey") == 0) {
        return 8;
    } else if (strcmp(color, "white") == 0) {
        return 9;
    } else {
        printf("error: %s\n", color);
        return -1;  // Return -1 to indicate an error
    }
}

int main() {
    char firstColor[10], secondColor[10], multiplier[10], tolerance[10];
    int firstVal, secondVal, multiplierVal;

    // Get input values from user
    printf("type in the first integer band color: ");
    scanf("%s", firstColor);
    printf("type in the second integer band color: ");
    scanf("%s", secondColor);
    printf("type in the multiplier band color: ");
    scanf("%s", multiplier);
    printf("type in the tolerance band color: ");
    scanf("%s", tolerance);

    // Convert color bands to numerical values
    firstVal = convertColorBand(firstColor);
    if (firstVal == -1) {
        return 1;  // Error occurred
    }

    secondVal = convertColorBand(secondColor);
    if (secondVal == -1) {
        return 1;  // Error occurred
    }

    multiplierVal = convertColorBand(multiplier);
    if (multiplierVal == -1) {
        return 1;  // Error occurred
    }

    // Calculate resistor value and print result
    int resistance = (firstVal * 10 + secondVal) * multiplierVal;
    printf("Resistance value: %d ohms +/- %s%%\n", resistance, tolerance);

    return 0;
}
