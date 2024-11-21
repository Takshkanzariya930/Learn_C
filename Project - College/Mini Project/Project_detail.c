#include <stdio.h>
#include <string.h>

//Declaring global variable to store data of every elements from "periodictable.csv".
char st[150][200];

//Declaring global variable to store separated data of single element which is asked.
char separated_data[20][60];

// "extractinfo" extracts data from "periodictable.csv" and store it in global variable "st".
int extractinfo() {

  FILE *fb = fopen("periodictable.csv", "r"); //Declaring pointer variable to open "periodictable.csv".
  int i = 0;

  // Raises an exception if "periodictable.csv" is not found.
  if (fb == NULL) {
    printf("Unable to load file\n");
    return 1;
  }

  // Stores line by line data to "st" from "periodictable.csv" until line becomes "NULL" or exedees 150th line.
  while ((fgets(st[i], 200, fb) != NULL) && (i < 150)) {
    i++;
  }

  fclose(fb); //Closes "periodictable.csv".

  return 0;

}

// "searchinfo" search the required element in "st" and separates it from ",".
int searchinfo(int num) {

  char temp[200]; //Declaring "temp" to store single line or data of single element from "st".
  int i = 0, j = 0;

  strcpy(temp, st[num]); //Storing data of single element in "temp" from "st".

  char *portion; //Declaring a pointer variable to point at the portion of string.

  portion = strtok(temp, ","); //Points at portion of string which is present before encountering "," in string.

  // Repete the process untill portion of string before encountering "," is "NULL".
  while (portion != NULL) {

    strcpy(separated_data[i], portion); //Stores that portion of string in "separated_data".
    i++;
    portion = strtok(NULL, ","); //Continues to point at next portion of string before encountering "," in string again.

  }
  return 0;
}

// "printinfo" prints the information related to requested element.
int printinfo(int num){

  printf("\n\n\033[1;35m--------------------------------------------------------------\e[0m");
  printf("\n\nInformation on element with atomic number \033[1;32m%d.\e[0m\n\n", num);
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

    // Raises exception if atomic number is 0 or greater than 118.
    if (n > 118 || n==0) {
      printf("\033[0;31m\nInvalid Atomic number.\e[0m");
      return 0;
    }

    // Calling above defined function.
    extractinfo();
    searchinfo(n);
    printinfo(n);

    printf("\n\nIf you want to continue press 1 else press 0 : ");
    scanf("%d", &check);

  } while (check == 1);

  printf("\n\033[0;31mThank you for using this program.\e[0m");

      return 0;
}