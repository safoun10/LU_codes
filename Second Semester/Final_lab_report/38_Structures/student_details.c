#include <stdio.h>

struct student_record
{
    int roll_number;
    float marks;
};

int main()
{
    struct student_record student;
    scanf("%d %f", &student.roll_number, &student.marks);
    printf("%d %.2f\n", student.roll_number, student.marks);
    return 0;
}
