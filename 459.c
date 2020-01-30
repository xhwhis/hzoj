#include <stdio.h>

struct node {
    char name[20];
    char sex;
    int age;
    double weight;
} student;

int main() {
    scanf ("%s %c%d%lf", student.name, &student.sex, &student.age, &student.weight);
    printf ("%s %c %d %.1lf", student.name, student.sex, student.age, student.weight);
    return 0;
}
