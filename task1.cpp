#include<iostream>
using namespace std;
void check(int a, int b);



main(){
int num1,num2;
cout<<"enter the first number ";
cin>>num1;
cout<<"enter the second number ";
cin>>num2;
check(num1,num2);
}










void check(int a, int b)
{
	if(a==b) {cout<<"true";}
	else { cout<<"false";}
}

