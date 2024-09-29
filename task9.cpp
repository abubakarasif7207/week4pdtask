#include<iostream>
using namespace std;
void checker(int a,int b);

main(){
int no_of_people;
cout<<"Number of people in the household: ";
cin>>no_of_people;
int no_of_rolls;
cout<<"Number of rolls of TP: ";
cin>>no_of_rolls;
checker(no_of_people,no_of_rolls);
}

void checker(int a,int b){
int paper_use_perday=a*57;
int total_tp_rolls=b*500;
int total_days =  total_tp_rolls/paper_use_perday;
if(total_days>=14){
cout<<"your tp will only last "<<total_days<<"days, no need to panic"<<endl;
}
else{
    cout<<"your tp will only last "<<total_days<<"days , buy more!";
}
}
