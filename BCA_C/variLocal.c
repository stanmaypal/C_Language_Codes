#include<stdio.h>
int cd=70;//Global
int main()
{
    static int ab=10;///Lacal
    auto int xy=45;///Lacal
    printf("Value of Lacal Variable= %d\n",ab);
    printf("Value of Global Variable= %d\n",cd);
    printf("Value of Local Variable= %d",xy);
}

