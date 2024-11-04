#include <stdio.h>
#include <string.h>

char st[150][200];

int infoex() 
{
    FILE *fb = fopen("name.csv", "r");

    if (fb == NULL) 
    {
        printf("Unable to load file\n");
        return 1;
    }

    int i = 0;

    while ((fgets(st[i], 200, fb) != NULL) && (i<150)) 
    {
        i++;
    }

    fclose(fb);
    return 0;
}

int search(int num)
{
    char text[200];
    char temp[20][60];
    int i=0,j=0;

    strcpy(text,st[num]);

    char* pointer = strtok(text,",");

    while(pointer != NULL)
    {
        strcpy(temp[i],pointer);
        i++;
        pointer = strtok(NULL,",");
    }

    printf("\n\n\nInformation on element with atomic number %d.\n\n",num);
    printf("Name : %s\n",temp[1]);
    printf("Symbol : %s\n",temp[2]);
    printf("Atonic Mass : %s\n",temp[3]);
    printf("Group : %s\n",temp[4]);
    printf("Period : %s\n",temp[5]);
    printf("Block : %s\n",temp[6]);
    printf("Elecron Configuration : %s\n",temp[7]);
    printf("Metalic Character : %s\n",temp[8]);
    printf("Physical State : %s\n",temp[9]);
}

int main()
{
    int n,check;

    while(check == 1)
      {
      printf("Enter atomic number to search information of element : ");
      scanf("%d",&n);
  
  
      if (n>118)
      {
          printf("Invalid Atomic number.");
          return 0;
      }
  
      infoex();
      search(n);

      printf("If you want to continue press 1 else press 0 : ");
      scanf("%d",&check);
      }

    return 0;
}   