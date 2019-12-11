#include<stdio.h>

int toupper(char *input)
{
	if( ( 'a' <= *input ) && ( 'z' >= *input ) )
	{
		printf( "\nOutput is %c\n", *input - 32  );
	}

}

main()
{
	char *ptr = NULL;
	printf("Enter the input:\n");
	scanf("%c",&ptr);
	toupper(&ptr);
}
