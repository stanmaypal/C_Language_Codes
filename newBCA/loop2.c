    #include<stdio.h>
    int main()
    {
        int n1,n2;
        char opt,cd;
        do
        {
        printf("Enter two no:");
        scanf("%d %d",&n1,&n2);

        printf("Sum =%d\n",(n1+n2));

        fflush(stdin);
        printf("Are you Repeat Z:");
        scanf("%c",&cd);

        }
        while(cd=='Z'||cd=='z'||cd=='q');


    }
