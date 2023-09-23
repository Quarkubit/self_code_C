#include <stdio.h>
#include <stdlib.h>//для "system('pause')"
#include <stdbool.h>//для булевых значений


int main(){
	const short A=0;// const делает константу(нельзя изменить в течении программы)

	float x=5.5f, y=6.67f, res;
	
	res =x/y;
	printf("x/y: %.2f\n",res);//%.2f означает 2 знака после запятой

	//long int
	//printf - %Ld     //L означает увеличенное


	bool isHasCar = true;

	// -32768 - 32768
	short s=500; //тоже самое: signed short s=500;

	//0 - 64000
	unsigned short a=5;

	//-2млн - 2млн
	int x1=5, y1=10, res1; //res=0

	//0 - 4млн
	unsigned int a1=6;

	//в 2 раза больше чем int
	long a2 = 5;
	unsigned long a3=5;

	//в 4 раза больше int
	long long a4 = 5;
	unsigned long long a5 = 6;

	float a6 =4.54658256367; //не работает с unsigned
	double a7 = 5.7165985782;//в 2 раза больше float
	//long double        	 //в 4 раза больше float

	char sym ='s';	//именно одинарные кавычки
	printf("%c\n",sym);//выводит один символ


	x *= 5;
	x--;

	res = x+y;
	printf("Variable: %d + %d = %d\n",x1,y1,res1);
	

	float x2,y2,res2;
	scanf("%f", &x2);//&(амперсант) - указатель
	scanf("%f", &y2);

	res2=x2/y2;
	printf("result:%.2f\n", res2);

	



	
	system("pause");//консоль ждёт клика
	return 0;
}