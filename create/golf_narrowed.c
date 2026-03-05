#include <cs50.h>
#include <stdio.h>

typedef struct
{
    int hole_number;
    int handicap;
    int par;
    int score;
}
hole;

// Function protoypes
void print_par(hole course[], int length);

int main(void)
{
    // Prompt user for number of holes
    int n = get_int("How many golf holes did you play today? ");
    printf("\n");
    hole course[n];

    // Prompt user for info about those holes
    for (int i = 0; i < n; i++)
    {
        course[i].hole_number = get_int("Golf course hole number: ");
        course[i].handicap = get_int("Hole handicap rating: ");
        do {
            course[i].par = get_int("Hole par: ");
        }
        while (course[i].par < 3 || course[i].par > 5);
        course[i].score = get_int("Your score: ");
        printf("\n");
    }

    // Compared to par
    print_par(course, n);


}

// Function that prints your score compared to par
void print_par(hole course[], int length)
{
    int total_par = 0;
    int total_score = 0;
    for (int i = 0; i < length; i++)
    {
        total_par += course[i].par;
        total_score += course[i].score;
    }
    if (total_score < total_par) {
        printf("You were %i under par though %d holes.\n", total_par - total_score, length);
    }
    else
    {
        printf("You were %i over par though %d holes.\n", total_score - total_par, length);
    }
}
