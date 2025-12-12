#include <stdio.h>

int n;
int marks[100];
char name[100][50];

void inputdata();
void displaydata();
void showreport();

void main() 
{
    printf("Enter number of students: ");
    scanf("%d", &n);
    inputdata();
    displaydata();
    showreport();

}

void inputdata() {
    printf("Enter name and marks of each student:\n");

    for (int i = 0; i < n; i++) 
    {
        scanf("%s %d", name[i], &marks[i]);
    }
}

void displaydata() 
{
    printf("\nStudent data:\n");

    for (int i = 0; i < n; i++) 
    {
        printf("Student: %s -> Marks: %d\n", name[i], marks[i]);
    }
}

void showreport() 
{
    int highest = marks[0];
    int lowest = marks[0];
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (marks[i] > highest)
        {
             highest = marks[i];
        }
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
         sum =sum+marks[i];
    }

    float avg = (float)sum / n;

    printf("\nReport:\n");
    printf("Highest marks = %d\n", highest);
    printf("Lowest marks  = %d\n", lowest);
    printf("Average marks = %.2f\n", avg);
}
