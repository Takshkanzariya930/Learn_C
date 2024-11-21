#include <stdio.h>
#include <string.h>

char st[150][200];

char separated_data[20][60];

int extractinfo() {

  FILE *fb = fopen("periodictable.csv", "r");
  int i = 0;

  if (fb == NULL) {
    printf("Unable to load file\n");
    return 1;
  }

  while ((fgets(st[i], 200, fb) != NULL) && (i < 150)) {
    i++;
  }

  fclose(fb);

  return 0;
}

int searchinfo(int num) {

  char temp[200];
  int i = 0, j = 0;

  strcpy(temp, st[num]);

  char *portion;
  portion = strtok(temp, ",");

  while (portion != NULL) {
    
    strcpy(separated_data[i], portion);
    i++;
    portion = strtok(NULL, ",");
  }

  return 0;
}

int printinfo(int num) {

  printf("\n\n\033[1;35m--------------------------------------------------------------\e[0m");
  printf("\n\nInformation on element with atomic number \033[1;32m%d.\e[0m\n\n",num);
  printf("Name : \033[1;36m%s\e[0m\n", separated_data[1]);
  printf("Symbol : \033[1;36m%s\e[0m\n", separated_data[2]);
  printf("Atonic Mass : \033[1;36m%s\e[0m\n", separated_data[3]);
  printf("Group : \033[1;36m%s\e[0m\n", separated_data[4]);
  printf("Period : \033[1;36m%s\e[0m\n", separated_data[5]);
  printf("Electron Configuration : \033[1;36m%s\e[0m\n", separated_data[6]);
  printf("Metallic Character : \033[1;36m%s\e[0m\n", separated_data[7]);
  printf("Physical State : \033[1;36m%s\e[0m\n", separated_data[8]);
  printf("\033[1;35m--------------------------------------------------------------\e[0m");

  return 0;
}

int main() {
  int n, check;

  do {
    printf("\nEnter atomic number to search information of element : ");
    scanf("%d", &n);

    if (n > 118 || n == 0) {
      printf("\033[0;31m\nInvalid Atomic number.\e[0m");
      return 0;
    }

    extractinfo();
    searchinfo(n);
    printinfo(n);

    printf("\n\nIf you want to continue press 1 else press 0 : ");
    scanf("%d", &check);

  } while (check == 1);

  printf("\n\033[0;31mThank you for using this program.\e[0m");

  return 0;
}