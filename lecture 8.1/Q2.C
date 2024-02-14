#include <stdio.h>
int main()
{

int unit;
float amt, total_amt, sur_charge;

  printf("enter the total number of units consumed :");
  scanf("%d",&unit);

  if(unit<=50){

    amt = unit*0.50;

  }else if(unit<=150){

    amt = 50*0.50+((unit-50)*0.75);

  }else if(unit<=250){

    amt = 50*0.50+100*0.75+((unit-150)*1.20);

  }else{

    amt = 50*0.50+100*0.75+100*1.20+((unit-250)*1.50);

  }

   sur_charge = amt*0.20;
  total_amt = amt+sur_charge;

  printf("Electricity bill = Rs. %.2f", total_amt);

  return 0;
}
