#include<stdio.h>
void createacount( char createuser[30],char arraypassword[10]);
int main()
{   
     int choice,i=0,l,k,lcondition=1;
     char user[30];
     char enteredpassword[10];
     char password[10];
     char passwordcheck[10];
     char loginid[30];
     
     start:

    printf("---------------welcome to student record-----------");
    printf("\npress choice 1 to create and 2 to login");
    scanf("%d",&choice);
    if(choice==1)
    {   
        printf("----create user id-----");
        scanf("%s",user);
        printf("%s",user);
       createacount(user,password);
      
       

        goto start;
    }

    if(choice==2)
    {    
        
        printf("----enter user id to login----");
        scanf("%s",loginid);
        FILE *file;
        file=fopen(loginid,"r");
        fscanf(file,"%s",passwordcheck);
        fclose(file);
        printf("-------enter password----");
        scanf("%s",enteredpassword);
        printf("---------\n%s",passwordcheck);
         printf("\n %d",lcondition);
        
        
        for(k=0;(passwordcheck[k]!='\0')&&(lcondition==1);k++)
        {
             if(enteredpassword[k]!=passwordcheck[k])
             {
                lcondition=0;
             }
             
        }    
              printf("\n %d",lcondition);

                      if(lcondition==1)

                   {  

                       printf("you logined successfully");


                       

                        int door;
                        
                        printf("enter 1 to see your profile and 2  to edit_____");
                        scanf("%d",&door);
                    if(door==1) 
                    {                 
                        char string[100];

                            FILE *file;

                        file=fopen(loginid,"r");

                        while(fgets(string,100,file)!=NULL)
                         { 
                            printf("%s",string);
                         }                     
                         fclose(file);
                    }
                    
                   if(door==2)
                   {

                        
                         char name[30];
                          int date;                 
                          int month;             
                          int year;
                          float marks10th[6];
                          float marks11th[5];
                          float marks12th[5];
                          float markssem1[5];
                          printf("%s",passwordcheck);
                          printf("enter name\n");
                          getchar();
                          fgets(name,30,stdin);
                          printf("enter date of birth\n enter date\n");
                          scanf("%d",&date);
                          printf("enter month");
                          scanf("%d",&month);
                          printf("enter year");
                          scanf("%d",&year);
                          printf("enter 10th marks");
                          printf("enter marks in first language ");
                          scanf("%f",&marks10th[0]);
                          printf("enter marks in second language ");
                          scanf("%f",&marks10th[1]);
                          printf("enter marks in english ");
                          scanf("%f",&marks10th[2]);
                          printf("enter marks in maths ");
                          scanf("%f",&marks10th[3]);
                          printf("enter marks in science ");
                          scanf("%f",&marks10th[4]);
                          printf("enter marks in social ");
                          scanf("%f",&marks10th[5]);

                           printf("enter 11th marks");
                          printf("enter marks in sanskrit ");
                          scanf("%f",&marks11th[0]);
                          printf("enter marks in english ");
                          scanf("%f",&marks11th[1]);
                          printf("enter marks in maths ");
                          scanf("%f",&marks11th[2]);
                          printf("enter marks in physics ");
                          scanf("%f",&marks11th[3]);
                          printf("enter marks in chemistry");
                          scanf("%f",&marks11th[4]);

                          printf("enter 12th marks");
                          printf("enter marks in sanskrit ");
                          scanf("%f",&marks12th[0]);
                          printf("enter marks in english ");
                          scanf("%f",&marks12th[1]);
                          printf("enter marks in maths ");
                          scanf("%f",&marks12th[2]);
                          printf("enter marks in physics ");
                          scanf("%f",&marks12th[3]);
                          printf("enter marks in chemistry");
                          scanf("%f",&marks12th[4]);


                           printf("enter marks in sem1");
                          printf("enter marks in engineering drawing");
                          scanf("%f",&markssem1[0]);
                          printf("enter marks in computer system ");
                          scanf("%f",&markssem1[1]);
                          printf("enter marks in computer programming ");
                          scanf("%f",&markssem1[2]);
                          printf("enter marks in ethics ");
                          scanf("%f",&markssem1[3]);
                          printf("enter marks in maths");
                          scanf("%f",&markssem1[4]);
           
                                              
                          FILE *file;
                        file=fopen(loginid,"w");                    
                         fprintf(file,"%s",passwordcheck);                    
                         fprintf(file,"\n name %s date of birth %d/%d/%d\n ------marks in 10th-----\n first language---%f\n second language---%f\n english---%f\n maths---%f\n science---%f\n social---%f\n",name,date,month,year,marks10th[0],marks10th[1],marks10th[2],marks10th[3],marks10th[4],marks10th[5]);                     
                         fprintf(file,"marks in 11th------\n sanskrit---%f\n english---%f\n maths---%f\n physics---%f\n chemistry---%f\n",marks11th[0],marks11th[1],marks11th[2],marks11th[3],marks11th[4]); 
                         fprintf(file,"marks in 12th------\n sanskrit---%f\n english---%f\n maths---%f\n physics---%f\n chemistry---%f\n",marks12th[0],marks12th[1],marks12th[2],marks12th[3],marks12th[4]);                     
                         fprintf(file,"marks in sem1--------\n engineering drawing---%f\n computer systems---%f\n computer programming---%f\n ethics---%f\n maths---%f\n",markssem1[0],markssem1[1],markssem1[1],markssem1[1],markssem1[1],markssem1[1]);                     
                                              
                                              
                 }

        }

                 

                   else
                   { 
                      printf("your password is incorrect");
                   } 
    }
                       
         
                        

                           
     
     return 0;
}



void createacount( char createuser[30],char arraypassword[10])
{       
        char temp1[10];
         char temp2[10];
        int j,count=1;
        printf("\n enter pass word of 10 characters-----|spaces not allowed|");
        scanf("%s",temp1);
        printf("confirm password");
        scanf("%s",temp2);
        
       for(j=0;((temp1[j]!='\0')||(temp2[j]!='\0'))&&(count==1);j++)
        {
            if(temp1[j]!=temp2[j])
            {
                count=0;
            }
           
        }

      if(count==1)
           { 
            
            FILE *file;
              file=fopen(createuser,"r");
              fprintf(file,"%s",temp1);
                fclose(file);
                printf("created sucessfully\n");
           }

        else
        {
           printf("your password not matched retry");
        }   
               

         
        

        

      
       

}