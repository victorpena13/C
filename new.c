#include <stdio.h>
int main() {
   printf("Hello, World!\n");

   printf("|\\\n");
   printf("| \\\n");
   printf("|  \\\n");
   printf("|___\\\n");


   char grade = 'D';
   char characterName[] = "John";
   int characterAge = 35;
   double gpa = 3.7;

   // %s - string
   // %d - integer
   // %f - double/float

   printf("there once was a man named %s\n", characterName);
   printf("he was only %d years old", characterAge);
   printf("he really liked the name %s\n", characterName);
   printf("but did not like being %d.\n", characterAge);

   printf("%d", 5.0 * 2.0);  
   printf("\n");
   printf("%f\n", 5.0 / 3.0);

   const int five = 5; // cannot be changed.


   int age;
   printf("please enter your age: ");
   scanf("%d", &age);
   printf("you are %d years old", age);
   





   return 0;
}
