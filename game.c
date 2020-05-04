#include <stdio.h>

int int main(int argc, char const *argv[]) {

  // Introduction to the program
  printf("Hi this is a program that will learn about you!\n");


  //Defining the parameters
  string name;
  int age;
  string place;

  // Learning about you

  // The name
  printf("First, please tell me your name.\n");
  scanf("%s \n", &namne);

  // The age
  printf("Next, please tell me your age. \n");
  scanf("%s \n", &age);

  // The place
  printf("Finally, please tell me where you leave\n");
  scanf("%s \n", &place);


  // The cheesy recall
  printf("Thank you so much for inputting your answers, I am currently remembering your choices. \n");
  printf("Hmmm..... Let me think as I recall your information.\n");
  printf("Your name is %s, your age is %d, and your place of residance is %s.", name, age, place);

  return 0;
}
