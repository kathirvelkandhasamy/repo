#include<stdio.h>

int str_strcmp(const char* dest,const char *src)
{
	int result =0, loop = 0;

	if( NULL  == src || NULL == dest )
	{
		printf("Input is NULL\n");
		return NULL;
	}

	while( '\0' != *( src + loop) && '\0' != *(dest + loop)  )
	{
		if( *(src + loop) == *(dest + loop)  )
		{
			
		}
		else
		{
			result = *(src + loop) - *(dest + loop);
			return result;
		}

		++loop;
	}

	return result;
}

main()
{
	char src[32] = {0};
	char dest[32] = {0};
	printf("Enter the src string:\n");
	gets(src);
	printf("Enter the dest:\n");
	gets(dest);
	printf("REsult %d\n",str_strcmp(dest,src));

}
