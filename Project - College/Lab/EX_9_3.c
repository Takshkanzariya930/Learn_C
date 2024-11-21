	#include <stdio.h>

	int main()
	{
		int i=0,j=0;
		char str1[50],str2[50],str3[100];

		printf("Enter first string : ");
		scanf("%[^\n]",str1);

		getchar();

		printf("Enter second string : ");
		scanf("%[^\n]",str2);

		
		while(str1[i] != '\0')
		{
			str3[i] = str1[i];
			i++;
		}

		
		while(str2[j] != '\0')
		{
			str3[i+j] = str2[j];
			j++;
		}

		str3[i+j] = '\0';

		printf("Joined string is : %s",str3);

	}