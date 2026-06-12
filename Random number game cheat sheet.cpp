dom number game#include<iostream>
using namespace std;

int main()
{    srand(time(0));
     int r=rand();
     int R=r%10;
     int Rnumber=R+1;
     printf("R=%d\n",Rnumber);
    
    int attempts=4, guess, try_again;
    int i;
    start:
    system("clear");
    printf("You Have 3 Attempts:\n");
    for(i=1; i<attempts; i++)
    {
    printf("Enter Your Guess:\n");
    scanf("%d",&guess);
    if(guess<Rnumber)
    {
        printf("Higher");
    }
    else if(guess>Rnumber)
    {
        printf("Lower");
    }
    else
    {
        printf("Congratulations You have found The number");
        printf("Do you wish to Continue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){ goto start;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        
       
    return 0;
}