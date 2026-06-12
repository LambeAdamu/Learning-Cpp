#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int guess, attempts, min, max, Rnumber,start,language, level, niveau;
 printf("Welcome to the Random number Game\n Press 1 to start\n");
 scanf("%d",&start);
     //first if statement to start game and clearscreen
     if(start<1)
     {return 0;}
     else if(start>1)
     {return 0;}
     else// This is for the actual game to clearscreen and actually llaunch language choosing
     {
     system("clear");
     
     printf("Language:\n 1.English\n 2.French\n");
     scanf("%d",&language);
     //Second if statement to choose the language
             if(language<=1)//EngliEnglish Section
             {
                 printf("Choose your Level\n 1.Easy(1 to 10 for 3 attempts)\n 2.Medium(1 to 20 for 5 attempts)\n 3.Hard(1 to 30 for 7 attempts)\n");
                 scanf("%d",&level);
                 //if statement to choose Level
                 if(level<=1)
                 {
                     system("clear");
                     printf("You have 3 attempts. Guess a number between 1 and 10\n ");
                    srand(time(0));
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
        if(try_again<=1){goto start;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){goto start;}
        else if(try_again>1){return 0;}
                 }
                 else if(level=2)
                 {
                     system("clear");
                     printf("You have 5 attempts, Guess a number between 1 and 2\n0");
                     srand(time(0));
                    int attempts=4, guess, try_again;
    int i;
    start1:
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
        if(try_again<=1){goto start1;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){goto start1;}
        else if(try_again>1){return 0;}
                 }
                 else if(level>=3)
                 {
                     system("clear");
                     printf("You have 7 attempts, Guess a number between 1 and 30\n");
                     srand(time(0));
                    int attempts=4, guess, try_again;
    int i;
    start2:
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
        if(try_again<=1){goto start2;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){goto start2;}
        else if(try_again>1){return 0;}
                 }
                 else{return 0;}
             }
             else //French Section
             {
                 printf("Choissisez Votre Niveau 1.Fascille(Entre 1 et 10 pour 3 essaies)\n 2.Normal(Entre 1 et 20 pour 5 essaies)\n 3.Dificille(Entre 1 et 30 pour 7 essaies)\n ");
                 scanf("%d",&niveau);
                 //if statement to choose Level
                     printf("Choose your Level\n 1.Easy(1 to 10 for 3 attempts)\n 2.Medium(1 to 20 for 5 attempts)\n 3.Hard(1 to 30 for 7 attempts)\n");
                 scanf("%d",&level);
                 //if statement to choose Level
                 if(level<=1)
                 {
                     system("clear");
                     printf("You have 3 attempts. Guess a number between 1 and 10\n ");
                    srand(time(0));
                    int attempts=4, guess, try_again;
    int i;
    start0:
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
        if(try_again<=1){goto start0;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){goto start0;}
        else if(try_again>1){return 0;}
                 }
                 else if(level=2)
                 {
                     system("clear");
                     printf("You have 5 attempts, Guess a number between 1 and 2\n0");
                     srand(time(0));
                    int attempts=4, guess, try_again;
    int i;
    start10:
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
        if(try_again<=1){goto start10;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){goto start10;}
        else if(try_again>1){return 0;}
                 }
                 else if(level>=3)
                 {
                     system("clear");
                     printf("You have 7 attempts, Guess a number between 1 and 30\n");
                     srand(time(0));
                    int attempts=4, guess, try_again;
    int i;
    start20:
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
        if(try_again<=1){goto start20;}
        else if(try_again>1){return 0;}
    }
    }
    
        printf("You are out of Attempts. You have lost.\n");
        printf("Do you wish to ccontinue?\n 1.Yes\n 2.No\n");
        scanf("%d",&try_again);
        if(try_again<=1){goto start20;}
        else if(try_again>1){return 0;}
                 }
                 else{return 0;}
             } 
             
     }
    return 0;
}