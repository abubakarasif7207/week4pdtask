#include<iostream>
using namespace std;
void change(string num1);



main(){
string num1;
cout<<"enter true or false ";
cin>>num1;
change(num1);
}





void change(string num1)
{
if(num1=="true"){
cout<<"false";
}
if(num1=="false"){
cout<<"true";
}
}