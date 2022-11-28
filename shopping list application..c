#include<stdio.h>
#include<stdio.h>

void main(void){
    int code,quantity;
    float price, amt, totalAmt, cash, change;
    char addAnother;

    do {
    system("cls");
    printf("SHOPPING LIST MENU");
    printf("[1] maize flour\t\tSh 200.00\n");
    printf("[2] sugar\t\tSh 150.00");
    printf("[3]cooking oil\t\tSh 400.00");
    printf("[4] lentils\t\tSh 300.00");
    printf("[5] soap\t\tSh 150.00");

    printf("\nEnter code\t: ");
    scanf("%d",&code);
    printf("\nEnter Quantity\t:");
    scanf("%d",&quantity);

    switch(code)  {
          case 1:price=200.00;
                break;
          case 2:price=150.00;
                 break;
          case 3:price=400.00;
                break;
          case 4:price=300.00;
                break;
          case 5:price=150.00;
                break;
       }
       amt=price * quantity;

       printf("\nAmount\t\t:%.2f", amt);

       totalAmt = totalAmt + amt;
       printf("\nTotal Amount\t: %.2f, totalAmt");
       printf("\nAmount\t\t:(y/n)?");
       addAnother = getche();
   }while(addAnother == 'y');

   do {
   printf("\nCash\t:");
   scanf("%f,&cash\t:");

   }while(cash < totalAmt);

   change = cash  - totalAmt;
   printf("\nChange\t\t: %.2f, change");
   printf("\n\nThank you! Come Again!");

}
