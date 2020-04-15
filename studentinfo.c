#include<stdio.h>
#include<string.h>
int student1(void);
int student2(void);
struct  student
    {
        char name[50];
        int age;
        char result[10];
      /* data */
    };
int main()
{
    char namestud[50];
    printf("Enter any one name of the student Listed below to get the details:\n1.Logesh\n2.Robert\n");
    gets(namestud);
    if(strcmp(namestud,"Logesh")==0)
    {
        printf("The details of the student is listed below:\n");
        int student1(void);

    }
    else if(strcmp(namestud,"Robert")==0)
    {
        printf("The details of the student is listed below:\n");
        int student2(void);

    }
    else
    {
        printf("This student details is not found\n");
    
    }
    return 0;    
}
int student1(void)
{
    struct student student1;
    strcpy(student1.name,"Logesh");
    student1.age=18;
    strcpy(student1.result,"Pass");
    printf("Name of the student:%s\n",student1.name);
    printf("Age:%d\n",student1.age);
    printf("Result:%s\n",student1.result);
    return 0;
}
int student2(void)
{
    struct student student2;
    strcpy(student2.name,"Robert");
    student2.age=17;
    strcpy(student2.result,"Fail");
    printf("Name of the student:%s\n",student2.name);
    printf("Age:%d\n",student2.age);
    printf("Result:%s\n",student2.result);
    return 0;

}
