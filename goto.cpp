#include <stdio.h>
int main()
{
	int n = 3;
	if (n == 3)
	{
		goto next;
		printf("it is not three\n");
	}
next:
    printf("it is three\n");
    return 0;
}
