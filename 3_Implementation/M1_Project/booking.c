#include "booking.h"
void Book(node*pointer)
{
    printf("                      *********Booking Portal*********\n");
    int serial;
    char key;

        if(pointer==NULL)
        {
            head=(node*)malloc(sizeof(node));
            pointer=head;
            pointer->next=NULL;
            printf("Enter your name: ");
            getchar();
            gets(pointer->name);
            phone_tag1:
            printf("Enter Mobile Number: ");
            gets(pointer->phone);
            int len=strlen(pointer->phone);
            if(len!=12)
            {
                printf("Invalid Mobile Number. Try again\n");
                goto phone_tag1;
            }
            int i;
            for(i=0;pointer->phone[i]!=NULL;i++)
            {
                if(pointer->phone[i]<'0' || pointer->phone[i]>'9')
                {
                     printf("Invalid Mobile Number. Try again\n");
                     goto phone_tag1;
                }
            }
            tickets--;
            serial=100-tickets;
            pointer->serial=serial;
            printf("\n\nTicket booked.\n");
            printf("Your ticket number is %d.\n\n\n",pointer->serial);
            printf("Press any key to continue...");
            scanf("%c",&key);
            if(key>=0)
            return;
        }
        while(pointer->next!=NULL)
        {
            pointer=pointer->next;
        }

        pointer->next=(node*)malloc(sizeof(node));
        pointer=pointer->next;
        pointer->next=NULL;
        printf("Enter your name: ");
        getchar();
        gets(pointer->name);
        phone_tag:
        printf("Enter your Mobile Number: ");
        gets(pointer->phone);
        int len=strlen(pointer->phone);
        if(len!=12)
        {
            printf("Invalid Mobile Number. Try again\n");
            goto phone_tag;
        }
        for(int i=0;pointer->phone[i]!=NULL;i++)
        {
            if(pointer->phone[i]<'0' || pointer->phone[i]>'9')
            {
                 printf("Invalid Mobile Number. Try again\n");
                 goto phone_tag;
            }
        }
        tickets--;
        serial=100-tickets;
        pointer->serial=serial;
        printf("\n\nTicket booked.\n");
        printf("Your ticket number is %d.\n\n\n",pointer->serial);
        printf("Press any key to continue...");
        scanf("%c",&key);
        if(key>=0)
        return;
    }

void Showlist(node *pointer)
{
    printf("                       *********Today's Devotee's list*********\n");
    if(pointer==NULL)
    {
        printf("No Devotee today!!!\n\n\n");
    }
    while(pointer!=NULL)
    {
        printf("%d: ",pointer->serial);
        printf("%s (Ph: %s )\n",pointer->name,pointer->phone);
        pointer=pointer->next;
    }
    printf("\n\n\n\nPress enter to go back to Endowment's menu: ");
    char key;
    getchar();
    scanf("%c",&key);
    if(key>=0)
    {
        
        return;
    }
}
