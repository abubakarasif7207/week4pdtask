#include<iostream>
using namespace std;

void discount(string a,int b);

main(){
string country;
int ticketprice;
cout<<"enter the country's name :";
cin>>country;
cout<<"enter the ticket price in dollar ";
cin>>ticketprice;
discount(country,ticketprice);
}
void discount(string a,int b)
{

    if(a=="Pakistan"){
        cout<<"fianl ticket price after discount " <<b-(b*0.05);
    }
     if(a=="Ireland"){
        cout<<"fianl ticket price after discount " <<b-(b*0.10);
    }
     if(a=="India"){
        cout<<"fianl ticket price after discount " <<b-(b*0.20);
    }
     if(a=="England"){
        cout<<"fianl ticket price after discount " <<b-(b*0.30);
    }
     if(a=="Canada"){
        cout<<"fianl ticket price after discount " <<b-(b*0.45);
    }
}



