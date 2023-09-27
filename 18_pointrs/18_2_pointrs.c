#include <stdio.h>
#include <stdlib.h>//для "system('pause')"

struct Abstract
{
    int width, height;
};

void calcSimple(struct Abstract obj);//обычный способ
void calcFast(struct Abstract *obj);//способ быстрее

int main(){
    struct Abstract square1 = {5,7};
    calcSimple(square1);

    calcFast(&square1);
	


	system("pause");//консоль ждёт клика
	return 0;
}

void calcSimple(struct Abstract obj) {
    int res = obj.width * obj.height;//обычный способ
    printf("result: %d\n",res);
}

void calcFast(struct Abstract *obj) {
    int res = obj->width * obj->height;//для использований в вычислениях
    printf("result: %d\n",res);
}