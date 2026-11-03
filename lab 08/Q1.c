#include<stdio.h>
/* function to calculate discount amount based on 
membershiptype and orignal total*/
float calculateDiscount( char type, float amount){
    float rate =0.0;

    // determine base membership discount rate
    if(type=='P' || type=='p'){
        rate =0.20;
    }else if(type=='G'||type=='g'){
        rate = 0.10;
    }else if(type=='S' || type=='s'){
        rate =0.05;
    }

    // Additional 2% discount ifamount >10000 PKR
    if(amount>10000.0){
        rate+=0.02;
    }
    return amount * rate;
}

// function to calculate final bill including tax and shipping 
float calculateFinalBill(float discountedAmount){
    float tax = discountedAmount * 0.15;
    float shipping =0.0;

    if(discountedAmount<=5000.0){
        shipping = 300.0;
    } else{
        shipping =0.0;  //free shipping
    }
    return discountedAmount + tax + shipping;
}

int main(){
    char type;
    float totalAmount, discountAmount, discountedAmount, finalBill;

    printf("Enter membership type(P= Platinum, G = Glod, S= Standard):");
    scanf("%c",&type);

    printf("Enter total shipping amount(PKR):");
    scanf("%f", &totalAmount);

    dicountAmount= calculateDiscount(type, totalAmount);
    discountedAmount = totalAmount - discountAmount;
    finalBill = calculateFinalBill(discountedAmount);

    printf("\n--- Bill Summary----\n");
    printf("Orignal Amount  : PKR %.2f\n",totalAMount);
    printf("Discount Amount  : PKR %.2f\n",discountAmount);
    printf("Discounted Amount  : PKR %.2f\n",discountedAmount);
    printf("Total Payable  : PKR %.2f\n",finalBill);

    return 0;
}
