/**
 * Use a data structure to hold student names, grade, and GPA.
 */
#include <cs50.h>
#include <stdio.h>

typedef struct
{
   string name;
   int grade;
   float gpa;
}
student;

void print_highest_gpa(student school[], int enrollment);

int main(void)
{
    // Ask for enrollment
    int enrollment = get_int("Enrollment: ");
    printf("\n");

    // Allocate space for the students
    student school[enrollment];

    // Fill in array
    for (int i = 0; i < enrollment; i++)
    {
        printf("Student #%i:\n", i + 1);
        school[i].name = get_string("\tName: ");
        school[i].grade = get_int("\tGrade: ");
        school[i].gpa = get_float("\tGPA: ");
        printf("\n");
    }

    print_highest_gpa(school, enrollment);
}

void print_highest_gpa(student school[], int enrollment)
{
    // Assume the first person has the highest GPA
    float highest = school[0].gpa;

    // Search for higher GPAs
    for (int i = 1; i < enrollment; i++)
    {
        // If a GPA is higher, make the new highest
        if (school[i].gpa > highest)
        {
            highest = school[i].gpa;
        }
    }

    // Search for all students with the highest GPA and print
    // their name
    for(int i = 0; i < enrollment; i++)
    {
        if (school[i].gpa == highest)
        {
            printf("%s has the highest GPA\n", school[i].name);
        }
    }
}
