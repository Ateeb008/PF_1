#include <stdio.h>

const int TOLL_RATE = 50; //fixed toll rate on PKR

void processVehicle(char vehicleType[]){
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles ++;
    totalRevenue += TOLL_RATE;

    printf("Processed : %-10s | Toll charged: %d PKR | Total Vehicle: %d | Total Revenue: %d PKR\n",vehicleType, TOLL_RATE, totalVehicles , totalRevenue);
}

int main(){
    printf("---Highway Toll Plaza Collection Report-----\n\n");

    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Van");

    return 0;
}

