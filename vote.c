#include <stdio.h>
#include <stdbool.h>

int main() {

int age;
int result;
bool isTrue = true;
bool notTrue = false;

printf("how old are you? ");
scanf("%d", &age);
printf("%d", age>=18);
return 0;
}