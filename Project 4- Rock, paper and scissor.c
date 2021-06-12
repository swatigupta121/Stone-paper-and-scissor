/*PROJECT - ROCK, PAPER AND SCISSOR
DATE - 05/06/2021*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>

int judgement(int user,int comp); //Function to decide the result

int main()
{
    system("color 1A");
    int comp_choice=0,result=0;
    int user_choice=0;
    do
    {
        printf("\nPlease choose\n1.Rock\n2.Paper\n3.Scissor\n4.Exit: ");
        scanf("%d",&user_choice);
        switch(user_choice)
        {
            case 1:
                printf("You chose: Rock\n");
                break;
            case 2:
                printf("You chose: Paper\n");
                break;
            case 3:
                printf("You chose: Scissor\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!!\nPlease choose again!!\n");
                continue;
        }
        srand(time(0));
        comp_choice = rand() % 3 + 1;   //Generating random numbers
        if(comp_choice==1)
            printf("Computer choose: Rock\n");
        else if(comp_choice==2)
            printf("Computer choose: Paper\n");
        else if(comp_choice==3)
            printf("Computer choose: Scissor\n");

        result = judgement(user_choice,comp_choice);

        if(result==-1)
            printf("TIE........\n");
        else if(result==1)
            printf("PLAYER WINS.........\n");
        else
            printf("COMPUTER WINS............\n");
    }while(1);

    return 0;
}
int judgement(int user,int comp)
{
    if(user==comp)  //If both computer and player choose same
        return -1;
    else if(user==1 && comp==2) //If user choose rock and computer choose paper
        return 0;
    else if(user==1 && comp==3) //If user choose rock and computer choose scissor
        return 1;
    else if(user==2 && comp==1) //If user choose paper and computer choose rock
        return 1;
    else if(user==2 && comp==3)  //If user choose paper and computer choose scissor
        return 0;
    else if(user==3 && comp==1) //If user choose scissor and computer choose rock
        return 0;
    else if(user==3 && comp==2) //If user choose scissor and computer choose paper
        return 1;
}
