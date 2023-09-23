#include <stdio.h>
#include <stdlib.h>//для "system('pause')"
#include <stdbool.h>//для булевых значений


int main(){
	
	int x = 20, y=5;

	//если в условном операторе одна строчка кода
	//то фигурные скобки не обязательны

	if(x == 10 || x==20) // "||" означает или
		printf("Yes\n");
	 else if(x>100 && y<7) //"&&" означает и
		printf("\"x\" more than 100\n");
	 else {
		printf("No\n");
	}

	bool isHasCar = true;
	if (isHasCar)
		printf("Yes\n");
	else 
		printf("No\n");

	

	int i = 15;

	// проверяет переменную на совпадение со значением "case"
	switch (i) {
	case 10:        //что-то вроде "if"
		printf("10\n");
		break;
	case 12:
		printf("12\n");
		break;
	case 15:
		printf("15\n");
		break;
	case 20:
		printf("20\n");
		break;

	default:   //что-то вроде оператора "else"
		printf("Not found\n");
		break;
	}
	

	
	system("pause");//консоль ждёт клика
	return 0;
}