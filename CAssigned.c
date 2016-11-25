

#include <stdio.h>
#include <conio.h>
#define SIZE 4

int main()
{
    int CurPin[SIZE] = {1,2,3,4};
    int GuessPin[SIZE] = {0,0,0,0};
    int i = 0;
    int valid = 1; // 0 is false
    int CurGuess = 0;
    
   
    printf("Please enter the current pin: ");
    for (i=0; i<SIZE; i++)
    {
            
        CurGuess = getch();
        if (CurGuess != CurPin[i])
        {
            valid = 0;
        }
    }
    if (valid == 0)
    {
        print("That input was incorrect");
    }
    return(0);
}


//GuessPin[1] != CurPin[1] || GuessPin[2] != CurPin[2] || GuessPin[3] != CurPin[3] || GuessPin[4] != CurPin[4]