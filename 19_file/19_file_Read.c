#include <stdlib.h>
#include<stdio.h>

int main(){

    FILE *fileRead = fopen("test.txt","r");
    char line[255];

    fgets(line, 255, fileRead);
    printf("%s",line);
    fgets(line, 255, fileRead);
    printf("%s",line);



    fclose(fileRead);

    system("pause");
    return 0;
}