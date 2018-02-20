#include <stdio.h>
int main(void)
{
	float bus1,bus2,bus3,tot;
	printf("Enter Ammount for bus1 ");
	scanf("%f",&bus1);
	printf("Enter Ammount for bus2 ");
	scanf("%f",&bus2);
	printf("Enter Ammount for bus3 ");
	scanf("%f",&bus3);
	tot=70*2*(bus1+bus2+bus3);
	printf("your total bus fare is ");
	printf("%.2f",tot);
return 0;
}
		
	
