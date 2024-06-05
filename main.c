#include <stdio.h>

int main(void){
  double sales,salary;

  printf("\n%s","Enter sales in dollars (-1 to end): $");
  scanf("%lf", &sales);

  while((int)sales != -1){
    salary = 200 + sales*0.09;
    printf("Salary is: $%.2lf",salary);

    printf("\n%s","Enter sales in dollars (-1 to end): $");
    scanf("%lf", &sales);
  }

  return 0;
}
