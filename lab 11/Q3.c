#include<stdio.h>

struct Item{
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main(){
    struct Item warehouse[5];
    float totalInventoryValue = 0;
    int searchID, found = 0;
   
    //input 5 item
    for(int i=0; i<5; i++){
        printf("\nEnter details for item %d: \n",i+1);
        printf("ID: ");
        scanf("%d", &warehouse[i].id);
        printF("\nName: ");
        scanf("%[^\n]", warehouse[i].name);
        printf("\nQuantity: ");
        scanf("%d", &warehouse[i].quantity);
        printf("\n Unit Price: ");
        scanf("%f", &warehouse[i].unitPrice);

        totalInventoryValue += warehouse[i].quantity * warehouse[i].unitPrice;
    }

    printF("\n Total Warehouse Inventory Value: %.2f\n",totalInventoryValue);

    //search by item id
    printf("\n Enter item ID to search: ");
    scanf("%d",&searchID);

    for(int i=0; i<5; i++){
        if(warehouse[i].id == searchID){
            printf("\n---ITEM FOUND----\n");
            printf("ID: %d\n", warehouse[i].id);
            printf("Name: %s \n",warehouse[i].name);
            printf("Quantity: %d\n", warehouse[i].quantity);
            printf("Unit Price: %.2f\n", warehouse[i].unitPrice);
            found =1;
            break;
        }
    }
    if(!found){
        printf("Item with ID %d not found.\n",searchID);
    }
    return 0;
}

