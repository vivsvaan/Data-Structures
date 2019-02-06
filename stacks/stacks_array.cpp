#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

#define MAX 10
int st[MAX], top=-1;

void push(int st[], int val)
{
    if(top == MAX-1)
    {
        cout<<"\n STACK OVERFLOW\n";
    }
    else
    {
        top++;
        st[top] = val;
        cout<<"\n Value pushed successfully\n";
    }
}

int pop(int st[])
{
    int val;
    if(top == -1)
    {
        cout<<"\n STACK UNDERFLOW";
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}

int peek(int st[], int j)
{
    if(top == -1)
    {
        cout<<"\n STACK IS EMPTY";
        return -1;
    }
    else return (st[j-1]);
}

void display(int st[])
{
    int i;
    if(top == -1)
        cout<<"\n STACK IS EMPTY";
    else
    {
        for(i=top;i>=0;i--)
        cout<<st[i]<<endl;
    }
}

int main()
{
    int val, option, j;

    do {
            system("cls");
            cout<<"\n *****MAIN MENU*****";
            cout<<"\n 1. PUSH";
            cout<<"\n 2. POP";
            cout<<"\n 3. PEEK";
            cout<<"\n 4. DISPLAY";
            cout<<"\n 5. EXIT";
            cout<<"\n Enter your option: ";
            cin>>option;
            switch(option)
            {
                case 1: cout<<"\n Enter the number to be pushed on stack: ";
                        cin>>val;
                        push(st, val);
                        system("pause");
                        break;

                case 2: val = pop(st);
                        if(val != -1)
                        cout<<"\n The value deleted from stack is: "<<val<<endl;
                        system("pause");
                        break;

                case 3: cout<<"\n Which index's value of stack do you want ";
                        cin>>j;
                        val = peek(st, j);
                        if(val != -1)
                        cout<<"\n The value stored at "<<j<<"th position of stack is: "<<val<<endl;
                        system("pause");
                        break;

                case 4: display(st);
                        system("pause");
                        break;
            }
        }while(option != 5);

    return 0;
}

