#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt","w+");
   fputs("This is tutorialspoint.com", fp);

   fseek( fp,7, SEEK_END);
   fputs(" C Programming Language", fp);
   fclose(fp);

   return(0);
}
