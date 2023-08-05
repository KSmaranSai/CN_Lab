#include <stdio.h>

int main(){

int a,b;

printf("Enter value of a : ");
scanf("%d",&a);
printf("Enter value of b : ");
scanf("%d",&b);

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
