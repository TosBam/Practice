#include <stdio.h>

int main(void)
{
	int age;

	printf("pls enter ur age: ");
	scanf("%d", &age);
	if (age < 50)
	{
		printf("you are young bro\n");
	}
	else if (age == 50)
	{
		printf("whao, that is good\n");
	}
	else
	{
		printf("you are old oh oga\n");
	}
	return (0);
}
