#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("The is the proabability finder!\n"
         "Enter your data.\n");

  double dinominator;
  double times;
  double neumerator;

  printf("Enter the neumerator:\n");
  scanf("%lf", &neumerator);

  printf("Enter the dinominator:\n");
  scanf("%lf", &dinominator);

  printf("Enter the times the event took place:\n");
  scanf("%lf", &times);

  double anwser1 = pow(neumerator, times);
  double anwser2 = pow(dinominator, times);

  printf("The anwser is %.0lf/%.0lf\n", anwser1, anwser2);

  return 0;
}
