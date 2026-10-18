#include <stdio.h>

int main() {
    
    float sensor_data[3][4];
    int target_col;

   
    printf("Enter temperature readings for 3 days and 4 sensors (3x4 matrix):\n");
    for (int r = 0; r < 3; r++) {
        printf("Day %d (4 sensor values separated by spaces): ", r + 1);
        for (int c = 0; c < 4; c++) {
            scanf("%f", &sensor_data[r][c]);
        }//end inner loop
    }//end outter loop

    
    printf("\nEnter the column index (0 to 3) of the defective sensor to remove: ");
    scanf("%d", &target_col);

    for (int r = 0; r < 3; r++) {
        for (int c = target_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }//end for loop
    }//end for loop

   
    printf("\n--- Updated 3x3 Sensor Data Matrix (After Removing Column %d) ---\n", target_col);
    for (int r = 0; r < 3; r++) {
        printf("Day %d: ", r + 1);
        for (int c = 0; c < 3; c++) {
            printf("%8.2f ", sensor_data[r][c]);
        }//end inner for loop
        printf("\n");
    }//end outer for loop

    return 0;
}