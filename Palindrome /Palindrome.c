//Concept of palindrome logic

w = "KANAK"

if (w = reverse(w))
    print("W is Palindrome")
else
    print("W is not Palindrome")

//palindrom by stack

#include<stdio.h>

char s[10];
int top=-1;

void push(char x){s[++top]=x;}
char pop(){return s[top--];}

int main()
{
    char w[]="KANAK";
    int i;

    for(i=0;w[i];i++) push(w[i]);

    for(i=0;w[i];i++)
        if(pop()!=w[i])
        {
            printf("W is not Palindrome");
            return 0;
        }

    printf("W is Palindrome");
}
