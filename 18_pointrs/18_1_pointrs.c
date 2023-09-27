#include <stdio.h>
#include <stdlib.h>

int main() {

    int Num = 2;
    //scanf("%d",&num);     &num - это и есть указатель

    int *pNum = &Num;//переменная-указатель 

    printf("%p - %p\n", &Num, pNum);//указатель имеет лучшую опимизацию

    printf("%d\n", *pNum);
    *pNum=91;
    printf("%d\n", *pNum);




    system("pause");
    return 0;
}