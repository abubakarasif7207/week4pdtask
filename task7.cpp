#include<iostream>
using namespace std;
void flowershop(int redrose,int whiterose,int tulip);

main(){
    int redroses,whiteroses,tulips;
    cout<<"Red rose ";
    cin>>redroses;
    cout<<"White rose ";
    cin>>whiteroses;
    cout<<"Tulips ";
    cin>>tulips;
    flowershop(redroses,whiteroses,tulips);
}
void flowershop(int redrose,int whiterose,int tulip)
{
    float orignalprice;
    cout<<"orignal price:  $";
    cin>>orignalprice;
    
    if(orignalprice>200){
        cout<<"price after discount:  $"<<orignalprice-(orignalprice*0.20);
    }
if(orignalprice<200){
    cout<<"No discount applied ";
}
}