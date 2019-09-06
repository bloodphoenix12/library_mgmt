#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
int showScreen();
struct book
{
     int  b_no;
     char b_name[100];
     char b_author[100];
     int  no_pages;

};
int main()
{
     int pin;
     while(pin !=1111){
     	printf("\n");
     	 printf("Enter pin number....");
     	scanf("%d",&pin);

     	if(pin ==1111){

     		//call welcome screen when pin matched
     		welcomeScreen();
		 }
     	else
     	{
     		printf("You have enter invalid pin !, Please, Enter valid pin");
			 //Run loop again and again until pin matched
		}
	 }
     return 0;
}
//welcome screen
	int welcomeScreen(){
	system("cls");
	struct book b[20];
     int    choice,n,i,count = 0;
     char   temp[40];
     do
     {
     	  printf("\n\t");
     	  printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
          printf("\t\t\t\xB2 MAIN MENU \xB2");
          printf("\n\t");
          printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
          printf("\t\xDB\xDB\xDB\xDB\xB2 PRESS 1.To add Book\n");
          printf("\n\t\xDB\xDB\xDB\xDB\xB2 PRESS 2. To Display Book Details\n");
          printf("\n\t\xDB\xDB\xDB\xDB\xB2 PRESS 3. To Display Book Of Given Author\n");
          printf("\n\t\xDB\xDB\xDB\xDB\xB2 PRESS 4. To count Number Of Books\n");
          printf("\n\t\xDB\xDB\xDB\xDB\xB2 PRESS 5. To Close Application\n\n");
          printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          time_t t;
    	  time(&t);
		  printf("\t%s", ctime(&t));
		  printf("\t..........................................\n");
		  printf("\tEnter Your Choice: ");
          scanf("%d",&choice);
          switch(choice)
          {
               case 1:
                    printf("\n\tHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("\t-------------------------------------\n");
                    printf("\tAdd Details of %d Book\n",n);
                    printf("\t-------------------------------------\n");
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("\tEnter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("\tBook Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("\n");
                         printf("\tEnter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("\n");
                         printf("\tEnter No. of Pages : ");
                         scanf("%d",&b[i].no_pages);
                         printf("\t-------------------------------------\n");
                    }
                    system("cls");
                    break;
               case 2:
                    printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2  Details of All Book \xB2\xB2\xB2\xB2\xB2\xB2");
                    printf("\n\t\t-----------------------------------------------------------\n");
                    printf("\t\tBook No.   Book Name\t  Author Name\tNo. of Pages");
                    printf("\n\t\t------------------------------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n\t\t %d\t\t  %s\t\t  %s\t\t  %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].no_pages);
                    }
                    printf("\n\n\t");
                    break;
             case 3:
                    printf("\n\tEnter Author Name: ");
                    scanf("%s",temp);
                    printf("\t--------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_author,temp) == 0)
                         {
                              printf("\n%s\n",b[i].b_name);
                         }
                    }
                    system("cls");
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\t******************************************");
                    printf("\n\t\tTotal Number of Books in Library : %d\n",count);
                    printf("\t******************************************\n");
                    system("cls");
                    break;
               case 5 :
                    exit(0);
          }
     }while(choice != 5);
}
