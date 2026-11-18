#include<stdio.h>

struct Product
{
    int id;
    char name[50];
    char category[30];
    float price;
    int stockQuantity;
};

void displayProductDetails(struct Product p ){
    
    float discount = p.price* 0.05;
    float finalPrice = p.price - discount;

    printf("\n---- Product Details ----\n");
    printf("ID : %d", p.id);
    printf("Name: %s\n", p.name);
    printf("Catrgory: %s\n",p.category);
    printf("Original Price: %2f\n", p.price);
    printf("Final Price (5% Discount): %.2f\n", finalPrice);
    printf("Avaliable Stock: %d\n",p.stockQuantity);
}

int main(){
    struct Product p1 = {101, "Wireless Mouse", "Electronics",2500.00, 15};
    struct Product p2 = { 102, "Mechinical Keyboard", "Electronics", 8000.00,8};
    
    displayProductDetails(p1);
    displayProductDetails(p2);
    return 0;
    
}


