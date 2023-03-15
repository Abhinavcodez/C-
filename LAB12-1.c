/*WAP to create a record for student information using structures*/

#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    char branch[40];
    int roll_number;
    char dob[10];
};
int main()
{
    struct student students[3];

    strcpy(students[0].name, "Abhinav Kumar Maurya");
    strcpy(students[0].branch, "Information Technology");
    students[0].roll_number=22124003;
    strcpy(students[0].dob, "06/04/2004");

    strcpy(students[1].name, "Anurag Kumar Maurya");
    strcpy(students[1].branch, "Instrumention and control Engineering");
    students[1].roll_number=22106020;
    strcpy(students[1].dob, "06/04/2004");

    strcpy(students[2].name, "Chinmay Chittaranjan Deo");
    strcpy(students[2].branch, "Instrumentation and control Engineering");
    students[2].roll_number=22106034;
    strcpy(students[2].dob, "24/09/2004");  
    // for (int i = 0; i<3; i++)
    // {
    //     scanf("%s %s %8d %s",students[i].name,students[i].branch,students[i].roll_number,students[i].dob);
    // }
    
    for (int i=0; i<3; i++)
    {
    printf("\nStudent name = %s\n",students[i].name);
    printf("Branch = %s\n",students[i].branch);
    printf("Student's Roll_Number = %d\n",students[i].roll_number)
    printf("Student Date of Birth = %s\n\n",students[i].dob);
    }      

    return 0;
}