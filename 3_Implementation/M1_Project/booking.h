#ifndef BOOKING_H_INCLUDED
#define BOOKING_H_INCLUDED

struct node
{
    int serial;
    char name[100];
    char phone[12];
    struct node *next;
};
typedef struct node node;
int tickets=100;
node *head;


#endif // BOOKING_H_INCLUDED
