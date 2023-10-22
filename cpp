Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* root=NULL;
    if(head1->data<head2->data)
    {
        root=head1;
    }
    else
    {
        root=head2;
        head2=head1;
        head1=root;
    }
    while(head1->next!=NULL && head2!=NULL)
    {
        
        if(head1->data<=head2->data && head2->data<=head1->next->data)
        {
            Node* temp=head2;
            head2=head2->next;
           
            temp->next=head1->next;
            head1->next=temp;
            
        }
        head1=head1->next;
    }
    Node* temp=root;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    return root;
}  
