#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str1[10], str2[10];
    
	int res;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
	
	res = strcmp(str1, str2);
	
	if(str1 && !str1[0] && str2 && str2[0])
	{
		printf("first is strings is null.\n");
	}
	
	else if(str1 && str1[0] && str2 && !str2[0])
	{
		printf("second strings is null.\n");
	}
	
	else if(str1 && !str1[0] || str2 && !str2[0])
	{
		printf("Both strings are null.\n");
	}
	else{
	
	    if(res == 0)
	    {
	        printf("Both strings are equal.\n");
	    }
	    else
	    {
	        printf("Both strings are not equal.\n");
	    }
	}
	
    return 0;
}
