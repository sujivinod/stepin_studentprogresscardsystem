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
#include<String.h>
#include<stdlib.h>
void second(void);
  struct mark_sheet{
               char na[20];
               long int rno;
               int ma[10];
               int total;
               float average;
               char rem[10];
               char cl[20];
               }stu[100];

  int main(){
            int b,a,n,flag=1;
            //welcome to green school
            printf("\nwelcome to Green school\n");
            //enter how many students you want
            printf("\nHow many students : \n");      
            scanf("%d",&n);
            for(a=1;a<=n;++a){
            printf("\n\nEnter the details of %d students : \n", n-a+1);
            printf("\nEnter student  %d  Name : ", a);
            scanf("%s", stu[a].na);
            printf("\n\nEnter student %d Roll Number : ", a);
            scanf("%ld", &stu[a].rno);
            stu[a].total=0;
            for(b=1;b<=5;++b){
            printf("\n\nEnter the mark of subject-%d :  ", b);
            scanf("%d", &stu[a].ma[b]);
            stu[a].total += stu[a].ma[b];
            if(stu[a].ma[b]<40)
            flag=0;
            }
            //Distinction class
            stu[a].average = (float)(stu[a].total)/5.0;
            if((stu[a].average>=75)&&(flag==1))
            strcpy(stu[a].cl,"Distinction");
            //First class
            else
            if((stu[a].average>=60)&&(flag==1))
            strcpy(stu[a].cl,"First Class");
            //second class
            else
          
            if((stu[a].average>=50)&&(flag==1))
            strcpy(stu[a].cl,"Second Class");
            //third class
            else
            if((stu[a].average>=40)&&(flag==1))
            strcpy(stu[a].cl,"Third Class");
            //pass  or fail class
            if(flag==1)
            strcpy(stu[a].rem,"Pass");
            else
            strcpy(stu[a].rem,"Fail");
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


            printf("\n\nName of Student : %s", stu[a].na);
            printf("\t\t\t\t Roll No : %ld", stu[a].rno);
            printf("\n------------------------------------------------------------------------");
            for(b=1;b<=5;b++){
            printf("\n\n\t Subject %d \t\t :\t %d", b, stu[a].ma[b]);
            }
            printf("\n");
            printf("\n");
            //Total marks
            printf("Totl Marks : %d", stu[a].total);
            //Average of marks
            printf("\t\t\t\t Average Marks : %5.2f", stu[a].average);
            printf("\n");
            printf("\n");

            printf("\n");
            printf("Class : %s", stu[a].cl);
            printf("\n Date:");
            printf("\t\t\t\t\t Status : %s", stu[a].rem);
            printf("\n");
            //parents signature
            printf("\t\t\t\t\t Parents Signature:");
            second();
            }
            return(0);
            }