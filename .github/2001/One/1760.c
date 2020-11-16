#include <stdio.h>
int main(void)
{	
	int a, b;
	int input;

	while(input = scanf("%d %d", &a, &b))
	{
		if(input == -1)
		{
			break;
		}
		printf("%d\n", a + b);
	}
	return 0;
}