#include <stdio.h>
#include <string.h>

char st[150][200];

int infoex() {
  FILE *fb = fopen("periodictable.csv", "r");

  if (fb == NULL) {
    printf("Unable to load file\n");
    return 1;
  }

  int i = 0;

  while ((fgets(st[i], 200, fb) != NULL) && (i < 150)) {
    i++;
  }

  fclose(fb);
  return 0;
}

int search(int num) {
  char text[200];
  char temp[20][60];
  int i = 0, j = 0;

  strcpy(text, st[num]);

  char *pointer = strtok(text, ",");

  while (pointer != NULL) {
    strcpy(temp[i], pointer);
    i++;
    pointer = strtok(NULL, ",");
  }

  printf("\n\n\033[1;35m--------------------------------------------------------------\e[0m");
  printf("\n\nInformation on element with atomic number \033[1;32m%d.\e[0m\n\n", num);
  printf("Name : \033[1;36m%s\e[0m\n", temp[1]);
  printf("Symbol : \033[1;36m%s\e[0m\n", temp[2]);
  printf("Atonic Mass : \033[1;36m%s\e[0m\n", temp[3]);
  printf("Group : \033[1;36m%s\e[0m\n", temp[4]);
  printf("Period : \033[1;36m%s\e[0m\n", temp[5]);
  printf("Electron Configuration : \033[1;36m%s\e[0m\n", temp[6]);
  printf("Metallic Character : \033[1;36m%s\e[0m\n", temp[7]);
  printf("Physical State : \033[1;36m%s\e[0m\n", temp[8]);
  printf("\033[1;35m--------------------------------------------------------------\e[0m");
}

int main() {
  int n, check;

  do {
    printf("\nEnter atomic number to search information of element : ");
    scanf("%d", &n);

    if (n > 118) {
      printf("\033[0;31mInvalid Atomic number.\e[0m");
      return 0;
    }

    infoex();
    search(n);

    printf("\n\nIf you want to continue press 1 else press 0 : ");
    scanf("%d", &check);

  } while (check == 1);

  printf("\n\033[0;31mThank you for using this program.\e[0m");

      return 0;
}