#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   char input[100];
   FILE* fp;
   char c;
   
   fp = fopen("sample.txt", "r");
   
   while( (c = fgetc(fp)) != EOF)
   {
          putchar(c);
   }
   
   fclose(fp);
  system("PAUSE");	
  return 0;
}
