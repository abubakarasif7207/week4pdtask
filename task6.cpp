#include<iostream>
using namespace std;
void longestduration(int a, int b);

main(){
    int hours,minutes;
    cout<<"enter the number of hours : ";
    cin>>hours;
    cout<<"enter the number of minutes: ";
    cin>>minutes;
    
    longestduration(hours,minutes);
}
void longestduration(int a, int b){
    if(a*60>b){
        cout<<a;
    }
    if(a*60<b){
        cout<<b;
    }
}