#include <stdio.h>

int main()
{
	int num;

	printf("Ingrese un numero y le dire su inversion: ");
	scanf("%d", &a);

	num = a;
	while(num > 10){
		residuo = num % 10;
		printf("%d", residuo);
		num = num / 10;
	}
	printf("%d", num);
	return 0;
}