#include <stdio.h>
#include <stdlib.h>//для "system('pause')"
#include <stdbool.h>

int main(){

//  переменная         условие     изменение за цикл
	for(float i = 100;     i>10   ;     i/=2) {
		printf("%.2f\n",i);
	}


	bool isHasCar = true;
	int x;
	while (isHasCar) {
		printf("Input 1 to exit: ");
		scanf("%d", &x);
		if(x==1)
			isHasCar = false;
	}


	int i = 0;
	while (i<10)
	{
		printf("%d\n",i);
		i++;
	}


	bool isHasCat = true;
	//тот же "while", но выполняется 1 раз 100%
	do{
		printf("Yes\n");
	} while (!isHasCat); //инверся булевго значения
	

	for(int y=0;y<50;y++) {
		if(y==15)
			break;
		
		if(y%2==0)
			continue;

		printf("%d\n",y);
	}


	int arr[]={5,67,0,-2,6};
	for(int i=0;i<5;i++) 
		printf("%d num: %d\n",i,arr[i]);
	
	int min = arr[0];
	for(int i=0;i<5;i++) {
		if(arr[i] < min)
			min = arr[i];
	}
	printf("min: %d\n",min);

	int max = arr[0];
	for(int i=0;i<5;i++) {
		if(arr[i] > max)
			max = arr[i];
	}
	printf("max: %d\n",max);
	
	


	system("pause");//консоль ждёт клика
	return 0;
}