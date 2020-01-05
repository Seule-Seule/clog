
#include <stdio.h>
#include "log.h"

int main(void)
{
	int i = -2;

	for (i = 0; i < 5;i++)
	{
		LR_LOG(__FILE__, __LINE__, i, i, "test");
	}
	printf("ok\n");
	return 0;
}
