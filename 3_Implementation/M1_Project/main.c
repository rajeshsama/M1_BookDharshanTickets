#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include "booking.c"
int main()
{
        head=NULL;
        char query,query2;
        while(1)
    {
        printf("                      *********Main Menu*********\n");
        main_again:
            printf("1.Press 1 for Devotee\n2.Press 2 for Endowment\n\n\n");
            scanf(" %c",&query);
            if(query=='1')
            {
                while(1)
                {
                    
                    printf("                      *********Devotee's Menu*********\n");
                    printf("1.Press 1 to book Darshan ticket\n2.Press 2 to go back to main menu.\n\n");
                    char book1;
                    book_again:
                        scanf(" %c",&book1);
                        if(book1=='1')
                        {
                            
                            Book(head);
                        }
                        else if(book1=='2')
                        {
                            
                            break;
                        }
                        else
                        {
                            printf("Wrong Command!!!\n\n");
                            goto book_again;
                        }
                }
            }
            else if(query=='2')
            {
                while(1)
                {
                    
                    printf("                      *********Endowment's Menu*********\n");
                    printf("1.Press 1 to show list of booked tickets\n2.Press 2 to go back to main menu.\n\n\n");
                    scanf(" %c",&query2);
                    if(query2=='1')
                    {
                        
                        Showlist(head);
                    }
                    else if(query2=='2')
                    {
                        
                        break;
                    }
                    else
                    {
                        printf("Wrong Command!!!\n\n");
                        continue;
                    }
                }
            }
            else if(query2=='3')

            {
                exit(0);
            }
            else
            {
                printf("Wrong Command!!!\n\n");
                goto main_again;
            }
    }
    return 0;
}
