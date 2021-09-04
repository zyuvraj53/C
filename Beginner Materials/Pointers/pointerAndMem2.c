#include <stdio.h>

int a = 1;
int b = 2;
int* pointer_of_address_of_a = &a;
int* pointer_of_pointer_of_address_of_a = &pointer_of_address_of_a;
char sent[] = "hey! hello";

int main(){

printf("%i\n", a);
printf("%i\n", b);
printf("%i\n", &b);
printf("%p\n", &pointer_of_pointer_of_address_of_a);
printf("%p\n", &pointer_of_address_of_a);
printf("%p\n", &a);
printf("%i\n", *pointer_of_address_of_a);

printf("%i\n", sizeof(int));
printf("%p\n", sent);

return 0;
}