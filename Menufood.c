#include <stdio.h>
#include <string.h>
#include <conio.h>

int check_subsequence (char [], char[]);

void main () {
  int flag;
  char s1[1000], s2[1000];
  FILE *in_file = fopen("file.txt", "r");
  clrscr();

   if (in_file == NULL) {
       printf("Error file missing\n");
       exit(1);
   }
  printf("enter your order\n");
  gets(s1);

  while (fgets(s2, sizeof s2, in_file)) {
       if (check_subsequence(s1, s2)) {
           printf("%s\n", s2);
       }
   }
   fclose(in_file);

 
  getch();
}

int check_subsequence (char a[], char b[]) {
  int c, d;

  c = d = 0;

  while (a[c] != '\0') {
     while ((a[c] != b[d]) && b[d] != '\0') {
        d++;
     }
     if (b[d] == '\0')
        break;
     d++;
     c++;
  }
  if (a[c] == '\0')
     return 1;
  else
     return 0;
}