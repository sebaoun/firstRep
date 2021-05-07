#include <stdio.h>

int main()
{
	printf("hello\n");
#ifdef A
	printf("A\n");
#else
	printf("B\n");
#endif
	return 0;
}
