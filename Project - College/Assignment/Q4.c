#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100],op;
	int choice;

	do
	{
		printf("\nMenu:\n");
	    printf("1 - Length of string.\n");
	    printf("2 - Reverse string.\n");
	    printf("3 - Copy string.\n");
	    printf("4 - Combine string.\n");
	    printf("5 - Compare string.\n");
	
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		printf("\n");
		getchar();

		switch(choice)
		{
			case 1:
			{
				printf("Enter string : ");
				scanf("%[^\n]",str1);
	
				printf("\nLength of the string is %d.",strlen(str1));

				break;
			}
	
			case 2:
			{
				printf("Enter string : ");
				scanf("%[^\n]",str1);

				int length = strlen(str1);

				for(int i=0;i<length;i++)
				{
					str2[length - 1 - i] = str1[i];
				}
				str2[length] = '\0';

				printf("\nReversed string is %s",str2);

				break;
			}
	
			case 3:
			{
				printf("Enter string : ");
				scanf("%[^\n]",str1);
				strcpy(str2,str1);
	
				printf("\nCopied string is %s.",str2);

				break;
			}
	
			case 4:
			{
				printf("Enter first string : ");
				scanf("%[^\n]",str1);
				getchar();
				printf("Enter second string : ");
				scanf("%[^\n]",str2);
				strcat(str1,str2);
	
				printf("\nCombined string is %s.",str1);

				break;
			}
	
			case 5:
			{
				printf("Enter first string : ");
				scanf("%[^\n]",str1);
				getchar();
				printf("Enter second string : ");
				scanf("%[^\n]",str2);
	
				if(strcmp(str1,str2) == 0)
				{
					printf("\nString are EQUAL.");
				}
				else
				{
					printf("\nString are NOT EQUAL.");
				}

				break;
			}
			
			default:
			{
				printf("\nINVALID choice.");

				break;			
			}
		}

		getchar();
		printf("\n\nEnter '1' if you want to CONTINUE else '0' : ");
		scanf("%c",&op);

	}while(op == '1');
}