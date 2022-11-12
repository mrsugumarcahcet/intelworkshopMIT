#include<stdio.h>
#include<time.h>
double time_spent=0.0;
int main()
{
clock_t begin = clock();
printf(“Hello world”);
clock_t end =clock();
time_spent += (double) (end-begin)/CLOCKS_PER_SEC;
printf(“ The elapsed time is %t second”, time_spent);
return 0;
}
