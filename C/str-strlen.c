#include <stdio.h>

int str_strlen( char *inputparam )
{
	int i =0;

	if( NULL == inputparam )
	{
		printf("Input is NULL\n");
		return 0;
	}

	while( '\0' != *(inputparam + i) )
	{
		i++;
	}

	return i;
}

main()
{
	char inputstr[64] = {0};
	printf("Enter the input String:");
	gets(inputstr);
	printf("Len %d\n",str_strlen(inputstr));
}
