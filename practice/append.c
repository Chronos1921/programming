struct node* temp
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data:");
scanf("%d",temp->data);
if (root==NULL)     
{
    root=temp;
}
else
{
    struct node* p;
    p=root;
    while (p->link!=NULL)
    {
        p=p->link
    }
    
}