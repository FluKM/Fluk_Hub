/*This is my project I did in C Language Calculating attendence of students
and printing it on an excel sheet.*/

#include <stdio.h>  // Header file for standard input output
#include <stdlib.h> // Include the stdlib.h header for the exit() function

struct attend // Declaration of structure
{
    char name[30];
    int present;
    float per;
};

int main()
{
    int z; // z == no. of working days
    int p; // p == no. of students
    printf("Enter the number of working days:\n");
    scanf("%d", &z);
    printf("Enter the number of Students:\n");
    scanf("%d", &p);

    struct attend s[100]; // Moved the structure declaration inside main()

    for (int i = 0; i < p; i++)
    {
        printf("Enter Name of student [%d]:\n", i + 1);
        scanf("%s", s[i].name);
        printf("Enter Number of days student [%d] was present:\n", i + 1);
        scanf("%d", &s[i].present);
    }

    // Open the file in write mode
    FILE *file = fopen("attendance.csv", "w");
    // File name saved as "attendance.csv"
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1); // Exit the program if file opening fails
    }

    // Write the headers to the file
    fprintf(file, "sr.no, NAME, PRESENT, TOTAL DAYS, PRESENTAGE\n");

    for (int i = 0; i < p; i++)
    {
        s[i].per = s[i].present * 100.0 / z;
        // Write student data to the file
        fprintf(file, "%d, %s, %d, %d, %.2f\n", i + 1, s[i].name, s[i].present, z, s[i].per);
    }

    fclose(file); // Close the file

    printf("Attendance data saved successfully in the 'attendance.csv' file.\n");

    return 0;
}
