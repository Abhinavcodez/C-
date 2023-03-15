// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// // #define array_size sizeof(str[n])/sizeof(str[0])

// // void sort_list(char str[],int n)
// // {
// //     char s[n];
// //     for (int i=0; i<n; i++)
// //     {
// //         for (int j =i+1; j<n; j++)
// //         {   
// //         if(strcmp(str[i],str[j])>0)
// //         {
// //         strcpy(s,str[i]);
// //         strcpy(str[i],str[j]);
// //         strcpy(str[j],s);                     
// //         }
// //         }
// //     }    
// // }
// // void print_list(char str[],int n)
// // {
// //     for (int i=0; i<n; i++)
// //     {
// //         printf("%s",str[i]);
// //     }
// // }
// // int main()
// // {
// //     int n;
// //     printf("Number of Names?\n");
// //     scanf("%d",&n);
// //     char name[n];
// //     for (int i=0; i<n; i++)
// //     {
// //         scanf("%s",name[i]);
// //     }
// //     sort_list(name,n);
// //     print_list(name,n);
// //     return 0;
// // }
// // #include<stdio.h>
// // #include<string.h>
// //  void main()
// // {
// //    int i,j,n;
// //    char str[100][100],s[100];
// //    printf("Enter number of names :");
// //    scanf("%d",&n);
// //    printf("Enter names in any order:");
// //    for(i=0;i<n;i++)
// //    {
// //       scanf("%s",str[i]);
// //    }
// //    for(i=0;i<n;i++)
// //    {
// //       for(j=i+1;j<n;j++)
// //       {
// //          if(strcmp(str[i],str[j])>0)
// //          {
// //             strcpy(s,str[i]);
// //             strcpy(str[i],str[j]);
// //             strcpy(str[j],s);
// //          }
// //       }
// //    }
// //    printf("The sorted order of names are:");
// //    for(i=0;i<n;i++)
// //    {
// //       printf("%s ",str[i]);
// //    }
// // }
// struct typedef employee
// {
//     int employee_code;
//     char name[40];
//     int date_of_joining;

// };

// void record()
// {
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d %s %d",&employees[i].employee_code,&employees[i].name,&employees[i].date_of_joining);
//     }
// }

// void datetodays(int date_of_joining,int current_date)
// {
//     int year;
//     int days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//     if (year%4==0 && year%100!=0 || year%400==0)
//     {
//         days_in_month[1]=29;
//     }
//     int month = 0;
//     int day = 0;
//     while (d > daysInMonth[month]) 
//     {
//         d -= daysInMonth[month];
//         month++;
//     }
//     day = d;
//     month++;  
//     printf("%d-%d-%d",day,month,year);  
// }
// int main()
// {
//     employee employees[n];
//     printf("Enter Number of Employees\n");
//     scanf("%d",&n);
//     printf("Enter Your Employee's Data(Code,Name,Date_of_joining(dd-mm-yy)..)\n");
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d %s %d",&employees[i].employee_code,&employees[i].name,&employees[i].date_of_joining);
//     }
//     int current_date,day,month,year;
//     printf("Enter Current Date(dd-mm-yy)\t");
//     scanf("%d",&day);
//     scanf("%d",&month);
//     scanf("%d",&year);
// }


// #define MAX_EMPLOYEES 100

// struct Employee {
//     int code;
//     char name[50];
//     int join_year;
// };

// struct Employee employees[MAX_EMPLOYEES];
// int num_employees = 0;

// void insert_employee() {
//     if (num_employees == MAX_EMPLOYEES) {
//         printf("Cannot insert more employees.\n");
//         return;
//     }
//     struct Employee emp;
//     printf("Enter employee code: ");
//     scanf("%d", &emp.code);
//     printf("Enter employee name: ");
//     scanf("%s", emp.name);
//     printf("Enter year of joining: ");
//     scanf("%d", &emp.join_year);
//     employees[num_employees++] = emp;
// }

// void search_employee() {
//     int code;
//     printf("Enter employee code to search: ");
//     scanf("%d", &code);
//     for (int i = 0; i < num_employees; i++) {
//         if (employees[i].code == code) {
//             printf("Employee found!\n");
//             printf("Code: %d\n", employees[i].code);
//             printf("Name: %s\n", employees[i].name);
//             printf("Year of joining: %d\n", employees[i].join_year);
//             return;
//         }
//     }
//     printf("Employee not found.\n");
// }

// void display_employees(int current_year) {
//     printf("Employees with tenure 3 years or more:\n");
//     for (int i = 0; i < num_employees; i++) {
//         int tenure = current_year - employees[i].join_year;
//         if (tenure >= 3) {
//             printf("%s\n", employees[i].name);
//         }
//     }
// }

// int main() {
//     int current_year;
//     printf("Enter current year: ");
//     scanf("%d", &current_year);

//     insert_employee();
//     insert_employee();
//     insert_employee();

//     search_employee();

//     display_employees(current_year);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_STUDENTS 100

// struct Student 
// {
//     char name[50];
//     int roll;
//     int age;
// };

// struct Student students[MAX_STUDENTS];
// int num_students = 0;

// void insert_student() {
//     if (num_students == MAX_STUDENTS) {
//         printf("Cannot insert more students.\n");
//         return;
//     }
//     struct Student stu;
//     printf("Enter student name: ");
//     scanf("%s", stu.name);
//     printf("Enter student roll: ");
//     scanf("%d", &stu.roll);
//     printf("Enter student age: ");
//     scanf("%d", &stu.age);
//     students[num_students++] = stu;

//     FILE *fp;
//     fp = fopen("students.txt", "a");
//     if (fp == NULL) {
//         printf("Error: Could not open file.\n");
//         return;
//     }
//     fprintf(fp, "%s %d %d\n", stu.name, stu.roll, stu.age);
//     fclose(fp);
// }

// void display_students() {
//     FILE *fp;
//     fp = fopen("students.txt", "r");
//     if (fp == NULL) {
//         printf("Error: Could not open file.\n");
//         return;
//     }
//     struct Student stu;
//     while (fscanf(fp, "%s %d %d", stu.name, &stu.roll, &stu.age) != EOF) {
//         printf("Name: %s, Roll: %d, Age: %d\n", stu.name, stu.roll, stu.age);
//     }
//     fclose(fp);
// }

// int main() {
//     int choice;
//     while (1) {
//         printf("Menu:\n");
//         printf("1. Insert record\n");
//         printf("2. Display records\n");
//         printf("3. Exit\n");
//         printf("Enter choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 insert_student();
//                 break;
//             case 2:
//                 display_students();
//                 break;
//             case 3:
//                 exit(0);
//             default:
//                 printf("Invalid choice.\n");
//         }
//     }
//     return 0;
// }
#include <stdio.h>

#define IS_LEAP_YEAR(year) ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

int main() 
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (IS_LEAP_YEAR(year)) 
    {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
