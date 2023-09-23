#include <stdio.h>
#include <stdlib.h>//для "system('pause')"


int main(){
	
	int arr[5] = {5,7,2,56,34};//создаём массиф(array) на 5 элементов(=0, если не указать через =)
	//если через равно написать массив, кол-во элементов писать не обязательно
	arr[0]=56;
	printf("first int array element: %d\n",arr[0]);

	float numbers[3];
	numbers[0]=5.4f;
	//numbers[1]=4.23f;
	numbers[2]=67.34;//без "f" на конце

	printf("2 ellements of float array: %f  %f\n",numbers[1],numbers[2]);

	char word[]={'s','o','m','e'};//1 способ
	char words[]="Hello world";//2 способ, но именно двойные кавычки

	words[1]='G';
	printf("%s\n",words);
	printf("%c\n",words[0]);

	//двумерный массив
	int array[3][4]={
		{4,5,6,5},
		{7,234,4,6},
		{4,678,6,7}
	};

	array[1][1]=5;
	printf("%d\n",array[1][1]);


	
	system("pause");//консоль ждёт клика
	return 0;
}