#include <stdio.h>
main(){
   FILE *fp;
   fp = fopen("C:\\Users\\perfect\\OneDrive\\Desktop\\file.xls", "a");//opening file
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file
   fclose(fp);//closing file
}
