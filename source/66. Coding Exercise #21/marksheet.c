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
int get_total_marks(Student s);
float get_percentage(Student s);
float average_percentage(Student students[], int n);

int main()
{
    Student students[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        students[i] = create_student();
    }
    printf("Total marks of first student: %d\n", get_total_marks(students[0]));
    printf("Percentage of first student: %f\n", get_percentage(students[0]));
    printf("Average percentage of 5 students: %f\n", average_percentage(students, 5));
    return 0;
}

Student create_student()
{
    Student s;
    printf("Enter the roll number: ");
    scanf("%d", &s.roll);
    getchar();
    printf("Enter the name: ");

    gets(s.name);
    printf("Enter the district: ");
    gets(s.address.district);
    printf("Enter the local level name: ");
    gets(s.address.local_level);
    printf("Enter the ward number: ");
    scanf("%d", &s.address.ward_number);
    int i;
    printf("Enter the marks in five subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s.marks[i]);
    }
    return s;
}

int get_total_marks(Student s)
{
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        sum += s.marks[i];
    }
    return sum;
}

float get_percentage(Student s)
{
    return get_total_marks(s) / 5.0f;
}

float average_percentage(Student students[], int n)
{
    int i;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += get_percentage(students[i]);
    }
    return sum / n;
}