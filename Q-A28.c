#include <stdio.h>

struct Student {
    int rollno;
    int marks[3]; 
    int totalMarks;
    float percentage;
};

void calculateTotalAndPercentage(struct Student *student) {
    student->totalMarks = 0;
    int i;
    for (i = 0; i < 3; i++) {
        student->totalMarks += student->marks[i];
    }

    student->percentage = (float)student->totalMarks / 3;
}

void displayStudentInfo(struct Student student) {
    printf("Roll Number: %d\n", student.rollno);
    printf("Marks in Subject 1: %d\n", student.marks[0]);
    printf("Marks in Subject 2: %d\n", student.marks[1]);
    printf("Marks in Subject 3: %d\n", student.marks[2]);
    printf("Total Marks: %d\n", student.totalMarks);
    printf("Percentage: %.2f%%\n", student.percentage);
    printf("\n");
}

int main() {
	int i,j;
    struct Student students[5];
    
    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);

        for (j = 0; j < 3; j++) {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        calculateTotalAndPercentage(&students[i]);
    }
    printf("\nStudent Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Details for Student %d:\n", i + 1);
        displayStudentInfo(students[i]);
    }

    return 0;
}

