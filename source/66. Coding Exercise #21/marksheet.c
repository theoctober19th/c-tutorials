#include <stdio.h>

typedef struct
{
    char district[20];
    char local_level[50];
    int ward_number;
} Address;

typedef struct
{
    int roll;
    char name[100];
    Address address;
    int marks[5];
} Student;

Student create_student();
int get_total_marks(Student);
float get_percentage(Student);
void print_marksheet(Student);
float average_percentage(Student[], int);

int main()
{
    Student students[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        students[i] = create_student();
    }

    float avg = average_percentage(students, sizeof(students) / sizeof(students[0]));
    printf("Average percentage of all students: %f\n", avg);

    printf("Marksheet of the first Student:\n");
    print_marksheet(students[0]);

    return 0;
}

Student create_student()
{
    Student s;
    printf("Enter the roll number: ");
    scanf("%d", &s.roll);
    getchar();
    printf("Enter the name of student: ");
    fgets(s.name, 100, stdin);
    printf("Enter the district: ");
    fgets(s.address.district, 20, stdin);
    printf("Enter the local levl name: ");
    fgets(s.address.local_level, 50, stdin);
    printf("Enter ward number: ");
    scanf("%d", &s.address.ward_number);
    printf("Enter the marks in five subjects: ");
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s.marks[i]);
    }
    return s;
}

int get_total_marks(Student s)
{
    int total = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        total = total + s.marks[i];
    }
    return total;
}

float get_percentage(Student s)
{
    int total = get_total_marks(s);
    return total / 5.0f;
}

float average_percentage(Student students[], int n)
{
    int i;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + get_percentage(students[i]);
    }
    return sum / 5;
}

void print_marksheet(Student s)
{
    printf("%-20s:  %s", "Name of student", s.name);
    printf("%-20s:  %d\n", "Roll Number", s.roll);
    printf("%-20s:  %s - %d, %s\n", "Address", s.address.local_level, s.address.ward_number, s.address.district);
    printf("********************************************************************************\n");
    printf("%-20s %-20s %-20s %-20s\n", "S.N.", "Subject", "Marks Obtained", "Status");
    printf("********************************************************************************\n");

    char *subjects[5] = {"Physics", "Chemistry", "Biology", "Mathematics", "English"};
    int i;
    int passed = 1;
    for (i = 0; i < 5; i++)
    {
        printf("%-20d ", i + 1);
        printf("%-20s ", subjects[i]);
        printf("%-20d ", s.marks[i]);
        printf("%-20s ", s.marks[i] >= 32 ? "Pass" : "Fail");
        if (s.marks[i] < 32)
            passed = 0;
        printf("\n");
    }
    printf("********************************************************************************\n");
    printf("%-20s:  %-20d\n", "Grand Total", get_total_marks(s));
    printf("%-20s:  %-20.2f\n", "Percentage", get_percentage(s));
    printf("%-20s:  %-20s\n", "Result", passed ? "Passed" : "Failed");
}