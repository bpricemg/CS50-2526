#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute the score of each word
    int player1_score = compute_score(word1);
    int player2_score =

    // Print the winner
}

int compute_score(string word)
{
    // Compute and return score for word
    int score = 0;
    // For each letter in the word
        // If an uppercase
            // What number letter in the alphabet is the letter
            int position = word[i] - 'A';
        // Else, if lowercase
            // What number letter in the alphabet is the letter
        // Lookup in table
        // Add to words value
    // Return the score
}
