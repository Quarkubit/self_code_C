#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 0;
    //scanf("%d",&num);     &num - это и есть указатель

    printf("%p\n", &num);//указатель имеет лучшую опимизацию



    system("pause");
    return 0;
}