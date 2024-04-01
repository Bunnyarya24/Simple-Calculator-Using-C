#include <stdio.h>

int main() {
  char option;
  double first_num, sec_num;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &option);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first_num, &sec_num);

  switch (option) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first_num, sec_num, first_num + sec_num);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first_num, sec_num, first_num - sec_num);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first_num, sec_num, first_num * sec_num);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first_num, sec_num, first_num / sec_num);
      break;
    default:
      printf("Error! Operator is not correct");
  }

  return 0;
}