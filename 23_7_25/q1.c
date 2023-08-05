#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

int a=atoi(argv[1]);
int b=atoi(argv[2]);

printf("Value of a before swap : %d",a);
printf("\n");
printf("Value of b before swap : %d",b);
printf("\n\n\n");

int temp = a;
a=b;
b=temp;

printf("Value of a after swap : %d",a);
printf("\n");
printf("Value of b after swap : %d",b);
printf("\n");

return 0;
}