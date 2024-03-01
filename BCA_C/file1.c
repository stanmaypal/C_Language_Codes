#include <stdio.h>

int main() {
   FILE *fp;
   fp = fopen("C:\\Users\\perfect\\OneDrive\\Desktop\\file.xls", "a"); // opening file in append mode
   if (fp == NULL) {
       printf("Error opening file!\n");
       return 1;
   }
   fprintf(fp, "Hello file by fprintf Pal...\n"); // writing data into file
   fclose(fp); // closing file
   return 0;
}
