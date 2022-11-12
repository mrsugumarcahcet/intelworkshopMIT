#include <stdio.h>
#include <time.h>
double time_spent = 0.0;
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {

clock_t begin = clock();
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
clock_t end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
printf("The elapsed time is %f seconds", time_spent);
    return 0;
}

Footer

