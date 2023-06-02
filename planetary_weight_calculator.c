#include <stdio.h>

int main() {

  int weight;
  int choice;

  printf("Hi, Little Mac!\n");
  printf("Please enter your Earth weight (in kg): ");
  scanf("%d", &weight);
  printf("You entered an Earth weight of %d kg.\n", weight);

  printf("Please choose a destination planet!\n");
  printf("1 - Mercury\n");
  printf("2 - Venus\n");
  printf("3 - Mars\n");
  printf("4 - Jupiter\n");
  printf("5 - Saturn\n");
  printf("6 - Uranus\n");
  printf("7 - Neptune\n");
  printf("8 - Pluto\n");
  
  printf("Please enter your choice: ");
  scanf("%d", &choice);

  switch(choice){
    case 1:
      printf("Your weight on Mercury is: %.2f kg\n", weight * 0.38);
      break;
    case 2:
      printf("Your weight on Venus is: %.2f kg\n", weight * 0.91);
      break;
    case 3:
      printf("Your weight on Mars is: %.2f kg\n", weight * 0.38);
      break;
    case 4:
      printf("Your weight on Jupiter is: %.2f kg\n", weight * 2.34);
      break;
    case 5:
      printf("Your weight on Saturn is: %.2f kg\n", weight * 1.06);
      break;
    case 6:
      printf("Your weight on Uranus is: %.2f kg\n", weight * 0.92);
      break;
    case 7:
      printf("Your weight on Neptune is: %.2f kg\n", weight * 1.19);
      break;
    case 8:
      printf("Your weight on Pluto is: %.2f kg\n", weight * 0.07);
      break;             
  }
}