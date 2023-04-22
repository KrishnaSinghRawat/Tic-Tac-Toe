#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    printf("Hello,  welcome to the game ...\n");
    printf("\t\t\t\t\tTIC TAC TOE\n");

    //variables
    char p1,p2;
    choice:
    
    printf("\nPlayer one enter Your choice (x/o) : ");
    scanf("%s",&p1);
    if(p1=='x'){
        p2='o';
    }
    else if (p1=='o')
    {
        p2='x';
    }
    else
    {   
        printf("\nenter a valid choice...");
        goto choice;
    }
    printf("\n\nPlayer 2 is %c",p2);

    //hash shows and game is starting.
    //clrscr();
    //system('clr');
    printf("\nHello welcome to the game ...\n");
    printf("\t\t\tTIC TAC TOE\n");
//    printf("\n");//loop to deploy matrix in between the hash.
    printf("\t\t\t    |    |    \n\t\t       ----------------\n\t\t\t    |    |    \n\t\t       ----------------\n\t\t\t    |    |    \n\n");
    return 0;
}
