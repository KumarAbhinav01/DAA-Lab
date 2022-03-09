/*
Q5. Write a program to implement binary search tree and transverse 
the binary search tree.
("I" or "i" for In-order)
("P" or "p" for Post-order)
("R" or "r" for Pre-order)
*/

#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};

Node * newNode(int data)
{
    Node * temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}

// Function for In-Order  (Left >> Root >> Right)
void inorder()
{
    int i;

}

// Function for Post-Order  (Left >> Right >> Root)
void postorder()
{

}

// Function for Pre-Order  (Root >> Left >> Right)
void preorder()
{

}

// This is the main function of the program
int main()
{
    /* struct Node* root = newNode(1); */
    int n,arr[10];
    char choice;
    cout<<"\nEnter number of nodes: ";
    cin>>n;
    cout<<"Enter elements one by one: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<"\nWrite 'i' or 'I' for In-Order";
    cout<<"\nWrite 'P' or 'p' for Post-Order";
    cout<<"\nWrite 'R' or 'r' for Pre-Order";
    cout<<"\nWant do you want to do: ";
    cin>>choice;

    if (choice == 'I' || choice == 'i')
    {
        inorder();
    }

    else if (choice == 'P' || choice == 'p')
    {
        postorder();
    }

    else if (choice == 'R' || choice == 'r')
    {
        preorder();
    }

    else
        cout<<"Enter the correct input!!";

    return 0;
}
