#include<stdio.h>
int main( )
{
FILE *fp ;
char ch ;
fp = fopen("C:\\Users\\perfect\\OneDrive\\Desktop\\demo.txt","r") ;
while ( 1 )
{
ch = fgetc ( fp ) ;
if ( ch == EOF )
break ;
printf("%c",ch) ;
}
fclose (fp ) ;
}
