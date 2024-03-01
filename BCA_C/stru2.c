#include<stdio.h>
struct address{
int pin;
char city[20];
};
struct data{
char name[20];
struct address ad;
};
int main()
{
    struct data d;
    strcpy(d.name,"Zack");
    d.ad.pin=12344;
    strcpy(d.ad.city,"GKP");
    printf("Name =%s\n",d.name);
    printf("Pin =%d\n",d.ad.pin);
    printf("City =%s\n",d.ad.city);
}
