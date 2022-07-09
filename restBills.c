#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//generate bills
void generateBillHeader( char name[50], char date[30]){
    printf("\n\n");
    printf("\t   Catarina's Restaurant");
    printf("\n\t -----------------------");
    printf("\nDate: %s", date);
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("----------------------------------------\n");
    printf("Items\t\t");
    printf("Quantity\t\t");
    printf("Total\t\t");
    printf("\n----------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30], int qty, float price){
    printt("s\t\t",item);
      printf("%d\t\t",qty);

}
