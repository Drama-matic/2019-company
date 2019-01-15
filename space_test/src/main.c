#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	uint8_t id;
	int8_t name[128];

	printf("please put your name :\n");
	scanf(&name);
	if(0 == strcmp(&name, "zhang jingqiu"))
		printf("yes,master!\n");
	else
		printf("go away, don't push me!");

	system("pause");

	return 0;
}
	
