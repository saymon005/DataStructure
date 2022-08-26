#include<bits/stdc++.h>
using namespace std;
struct node{
        int data;
        struct node* link;
    };
void append(struct node* root)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter The Node"<<endl;
    cin>>temp->data;
    temp->link = NULL;
    if(root== NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p->link !=NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}
void display()
{
    struct node* ptr;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
}

int main()
{
    struct node* root;
    root = (struct node*)malloc(sizeof(struct node));
    append(root);
    display();

    return 0;

}
