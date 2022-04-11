#include <stdio.h>
#define METERCHARGE 100
int main() {
  char name[20];
  float unit, charge, total;
  printf("enter your name ");
  fgets(name, 20, stdin);
  printf("your name is %s", name);
  printf("enter the no of units :");
  scanf(" %f", &unit);
  if (unit <= 0) {
    printf("invalid input\n");

  } else if (unit <= 100) {
    charge = unit * 0.70;

  } else if (unit > 100 && unit <= 200) {
    charge = unit * .80;
  } else if (unit > 200 && unit >= 300) {
    charge = unit * 1;
  }
  if (charge > 400) {
    total = charge * .15 + charge;
  }
  if (charge > 400) {
    printf("the charge is  %f \n", total);
  } else {
    printf("the charge is %f", charge);
  }
  return 0;
}