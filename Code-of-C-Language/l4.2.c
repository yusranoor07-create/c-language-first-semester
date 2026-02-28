#include <stdio.h>
int main() {
    float discount, item_cost, saved_amount, final_cost;
    printf("enter item_cost");
    scanf("%f", &item_cost);
    printf("Buy more than RS 1999 and get upto 50 percent discount \n");
    
    if ( item_cost>=2000 && item_cost<=4000){
        discount = item_cost * 0.2;
    }
    else if (item_cost>=4001 && item_cost<=6000){
        discount=item_cost * 0.3;
    }
    else {
        discount = item_cost * 0.5;
    }
    final_cost= item_cost-discount;
    saved_amount= item_cost - final_cost;
    printf("item_cost is RS : %f ",item_cost);
    printf("saved_amount is Rs %f", saved_amount);
    printf(" final_cost is Rs %f", final_cost);
    return 0;
}
