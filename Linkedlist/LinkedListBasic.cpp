#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void insert(int new_data)
{
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display()
{
    struct node* temp;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        //temp->next != NULL;
    }
}
int main()
{
    insert(3);
    insert(5);
    insert(8);
    insert(9);

    display();

    return 0;
}
