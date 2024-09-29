#include<iostream>
using namespace std;
void chalan(int a);

main(){
    int speed;
    cout<<"speed  :";
    cin>>speed;
    chalan(speed);
}
 void chalan(int a){
    if(a>100){
        cout<<"Halt... You will be challaned!!!";
    }
    if(a<100){
        cout<<"Perfect! You are doing good.";
    }
 }