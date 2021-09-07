/**
 * @file main.c
 * 
 * @author vinod kumar reddy jogappagari
 * 
 * @brief auto  Student progress card generator
 * 
 * 
 * @version 0.1
 * 
 * @date 2021-09-06
 * 
 * 
 * 
 * @copyright Copyright (c) 2021
 * 
 * *
 * *
 * 
 */
#include<stdio.h>
#include<unity.h>
#include<String.h>
#include<stdlib.h>
void setUp()
{
/*required by the unity test*/
}
void tearDown()
{
/*required by the unity test*/
}
void second(void);
  struct mark_sheet{
               char name[20];
               long int rollno;
               int marks[10];
               int total;
               float average;
               char rem[10];
               char cl[20];
               }students[100];

  int main(){
      UNITY_BEGIN();
            int b,a,n,flag=1;
            char ch;
            //welcome to green school
            printf("\nwelcome to Green school\n");
            //enter how many students you want
            printf("\nHow many students : \n");      
            scanf("%d",&n);
            for(a=1;a<=n;++a){
            printf("\n\nEnter the details of %d students : \n", n-a+1);
            printf("\nEnter student  %d  Name : ", a);
            scanf("%s", students[a].name);
            printf("\n\nEnter student %d Roll Number : ", a);
            scanf("%ld", &students[a].rollno);
            students[a].total=0;
            for(b=1;b<=5;++b){
            printf("\n\nEnter the mark of subject-%d :  ", b);
            scanf("%d", &students[a].marks[b]);
            students[a].total += students[a].marks[b];
            if(students[a].marks[b]<40)
            flag=0;
            }
            //Distinction class
            students[a].average = (float)(students[a].total)/5.0;
            if((students[a].average>=75)&&(flag==1))
            strcpy(students[a].cl,"Distinction");
            //First class
            else
            if((students[a].average>=60)&&(flag==1))
            strcpy(students[a].cl,"First Class");
            //second class
            else
          
            if((students[a].average>=50)&&(flag==1))
            strcpy(students[a].cl,"Second Class");
            //third class
            else
            if((students[a].average>=40)&&(flag==1))
            strcpy(students[a].cl,"Third Class");
            //pass  or fail class
            if(flag==1)
            strcpy(students[a].rem,"Pass");
            else
            strcpy(students[a].rem,"Fail");
            flag=1;
            }
            for(a=1;a<=n;++a){
            printf("\t\t\t******MARKS SHEET******");
            printf("\n");

//green school
            printf("\n");
            printf("\t\t\t\tGreen school");
            //united states
            printf("\n");
            printf("\t\t\t\tUnited States");
            printf("\n");


            printf("\n\nName of Student : %s", students[a].name);
            printf("\t\t\t\t Roll No : %ld", students[a].rollno);
            printf("\n------------------------------------------------------------------------");
            for(b=1;b<=5;b++){
            printf("\n\n\t Subject %d \t\t :\t %d", b, students[a].marks[b]);
            }
            printf("\n");
            printf("\n");
            //Total marks
            printf("Totl Marks : %d", students[a].total);
            //Average of marks
            printf("\t\t\t\t Average Marks : %5.2f", students[a].average);
            printf("\n");
            printf("\n");

            printf("\n");
            printf("Class : %s", students[a].cl);
            printf("\n Date:");
            printf("\t\t\t\t\t Status : %s", students[a].rem);
            printf("\n");
            //parents signature
            printf("\t\t\t\t\t Parents Signature:");
            RUN_TEST(second);
            ch=getchar();
            }
            return UNITY_END();
            }