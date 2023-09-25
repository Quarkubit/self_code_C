#include "fun.h"

void sum(int a, int b);
void string(char arr[]);
float mult(float a, float b);



int main(){
    sum(20,50);

    int x=5,y=7;
    sum(x,y);

    string("hello");

    float result = mult(4.5f, 7.8f);
    printf("%.2f\n",result);



    system("pause");
    return 0;
}





void sum(int a, int b) {
    int res = a+b;
    printf("result: %d\n",res);
}

void string(char arr[]) {
    printf("%s\n",arr);
}

float mult(float a, float b){
    float res = a * b;
    printf("result: %.2f\n",res);
    return res;
}