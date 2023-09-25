#include <stdio.h>
#include <stdlib.h>//для "system('pause')"


//струкура(объект)
struct car{
    int speed;
    char name[50];
    float weight;
};

int main(){

    struct car bmw;
    bmw.speed = 250;
    strcpy(bmw.name, "MW M5");//напрямую нельзя, т.к. выдаст ощибку. Данная функция копирует текст в переменную
    bmw.weight = 2500.00f;

    struct car audi = {300,"Audi A8",2700.00f};//добавление данных сразу при создании

    
    printf("%s, it\'s speed: %d\n",audi.name, audi.speed);
    printf("%s, it\'s speed: %d\n",bmw.name, bmw.speed);
	


	system("pause");//консоль ждёт клика
	return 0;
}