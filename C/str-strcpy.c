#include<stdio.h>

char* str_strcpy( char *dest,const char *src )
{
	int count = 0;

	if( NULL == src )
	{
		printf("Src is NULL\n");
		return NULL;
	}

	while( *(src + count ) != '\0' )
	{

		*(dest + count) = *(src + count);
		++count;
	}

	dest[count]  = '\0';

	return dest;
}

main()
{

	char src[32] = "Hi...";
	char dest[32] = {0};
	printf("Enter the src string\n");
	gets(src);
	printf("Destination str %s\n",str_strcpy(dest,src));
}

