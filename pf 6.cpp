#include <stdio.h>

char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int marks;
    char grade;


    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1; 
    }

    grade = getGrade(marks);

    switch (grade) {
        case 'A':
            printf("Grade: A\n");
            break;
        case 'B':
            printf("Grade: B\n");
            break;
        case 'C':
            printf("Grade: C\n");
            break;
        case 'D':
            printf("Grade: D\n");
            break;
        case 'F':
            printf("Grade: F\n");
            break;
        default:
            printf("Error: Invalid grade.\n");
            break;
    }

    return 0;
}
