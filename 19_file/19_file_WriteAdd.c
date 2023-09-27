#include <stdio.h>
#include <stdlib.h>//для "system('pause')"

int main(){

    //использовать указатель
    FILE *fileWrite = fopen("test.txt", "w");//второй аргумент - метод открытия
	//если файла нет, то файл создастся

    fprintf(fileWrite,"frst\n");


    FILE *fileAdd = fopen("test.txt", "a");

    fprintf(fileAdd,"scnd\n");




    fclose(fileWrite);
    fclose(fileAdd);

	system("pause");//консоль ждёт клика
	return 0;
}