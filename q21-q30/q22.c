// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cost_price, selling_price, profit_loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);
    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit_loss = selling_price - cost_price;
        percentage = (profit_loss / cost_price) * 100;
        printf("Profit: %f\n", profit_loss);
        printf("Profit Percentage: %f", percentage);
    } else if (cost_price > selling_price) {
        profit_loss = cost_price - selling_price;
        percentage = (profit_loss / cost_price) * 100;
        printf("Loss: %f\n", profit_loss);
        printf("Loss Percentage: %f", percentage);
    } else {
        printf("NO profit No Loss");
    }
    return 0;
}