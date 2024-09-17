#include <stdio.h>
int main(){

printf("Accept 5 employees name and salary and count average and total salary");
printf("\n");

char emp[5][10];
int salary[5];
int total_salary,ave_salary;

for(int i=1;i<5;i++)
{
 printf("Employee %d:",i);
 printf("emp name:");
 scanf("%s",emp[i]);
 printf("salary:");
 scanf("%d",salary[i]);
 total_salary += salary[i];
}
ave_salary=total_salary/5;
printf("Total salary:%d\n",total_salary);
printf("Average salary: %d\n",ave_salary);

}
