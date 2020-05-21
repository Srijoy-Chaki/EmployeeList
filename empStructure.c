#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
struct empinfo
{
    char name[10];
    char department[10];
    int age;
    long phno;
    float salary;
};
void main()
{
  int i;
  struct empinfo emparr[20];
  printf("Enter the details of the employees.");
  for(i=0;i<20;i++)
  {
      printf("\nEnter the name of the employee: ");
      scanf("%s",emparr[i].name);
      printf("\nEnter the department of the employee: ");
      scanf("%s",emparr[i].department);
      printf("\nEnter the age of the employee: ");
      scanf("%d",&emparr[i].age);
      printf("\nEnter the phone number of the employee: ");
      scanf("%li",&emparr[i].phno);
      printf("\nEnter the salary of the employee: ");
      scanf("%f",&emparr[i].salary);
  }
  printf("\nThe employee information list");
  printf("\nName\tDepartment\tAge\tPhone Number\tSalary\n");
  for(i=0;i<20;i++)
  {
      printf("%s\t%s\t\t%d\t%li\tRs.%f\n",emparr[i].name,emparr[i].department,emparr[i].age,emparr[i].phno,emparr[i].salary);
  }
  getch();
}
