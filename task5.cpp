#include<iostream>
using namespace std;
void possible_bonus(int a,int b);

main(){
int your_position,friend_position;
cout<<"enter your position: ";
cin>>your_position;
cout<<"enter your friend's position: ";
cin>>friend_position;
possible_bonus(your_position,friend_position);

}
void possible_bonus(int a,int b){
if(a+6>=b){
cout<<"true";}
else{
cout<<"false";}
}

