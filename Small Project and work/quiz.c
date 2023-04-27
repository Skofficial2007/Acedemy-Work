/*
Quiz Game
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Qstring[10][500] = {
        "\n1) Which movie has won the most number of Oscars?", // Titanic
        "\n2) What is the highest grossing movie of all time?", // Avatar
        "\n3) Which science fiction classic stars Linda Hamilton as Sarah Connor?", // Terminator
        "\n4) Who are you?\n"
};

char Astring[10][500] = {
        "[A] Titanic \n[B] Cabaret \n[C] Jungle Book \n[D] Avatar\n",
        "[A] Avengers: Endgame \n[B] Titanic \n[C] Avatar \n[D] Gone with the Wind\n",
        "[A] Terminator \n[B] Alien \n[C] The Tomorrow War \n[D] Blade Runner\n"
};

char AnswerKey[10] = {1, 3, 1};

int question(int *count, int limit)
{
    int i = *count;
    if(i == limit)
    {
        printf("\n\tQuestion Finished\n");
        return 1;
    }
    puts(Qstring[i]);
    puts(Astring[i]);
    return 0;
}

int main()
{
    int limit = 0;
    int count = 0;
    int choice, i = 0, score = 0;
    for(int i = 0; Qstring[i][500] != '\0'; i++)
    {
        limit++;
    }
    printf("Limit is: %d", limit);

    while(question(&count, limit) == 0)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == AnswerKey[i])
        {
            printf("\nCorrect Answer\n");
            score++;
        }
        else
        {
            printf("\nWrong Answer\n");
        }

        count++;
        i++;
    }

    printf("\nYour Overall score is: %d\n", score);

    return 0;
}