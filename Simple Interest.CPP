#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int p,r,t,si;
cout<<"Enter principal";
cin>>p;
cout<<"Enter Rate";
cin>>r;
cout<<"Enter Time";
cin>>t;
si=(p*r*t)/100;
cout<<si;
getch();
return 0;
}