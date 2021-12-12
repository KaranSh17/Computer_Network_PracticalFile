#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
char sender[50],receiver[50];
int i,winsize;
cout<<"\n ENTER THE WINDOWS SIZE : "<<endl;
cin>>winsize;
cout<<"\n SENDER WINDOW IS EXPANDED TO STORE MESSAGE OR WINDOW \n"<<endl;
cout<<"\n ENTER THE DATA TO BE SENT: "<<endl;
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];
receiver[i]=NULL;
 cout<<"\n MESSAGE SEND BY THE SENDER:\n"<<endl;
 puts(sender);
 cout<<"\n WINDOW SIZE OF RECEIVER IS EXPANDED\n"<<endl;
 cout<<"\n ACKNOWLEDGEMENT FROM RECEIVER \n"<<endl;
for(i=0;i<winsize;i++);
cout<<"\n ACK:"<<i<<endl;
 cout<<"\n MESSAGE RECEIVED BY RECEIVER IS : "<<endl;
 puts(receiver);
 cout<<"\n WINDOW SIZE OF RECEIVER IS SHRINKED \n"<<endl;
getch();
return 0;
}
