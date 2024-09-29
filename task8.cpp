#include<iostream>
using namespace std;
void pet(int holidays);


main(){
    int holidays;
    cout<<"Holidays: ";
    cin>>holidays;
    pet(holidays);
}
void pet(int holidays){
    // working days
   int workingdays=365-holidays;
//    time for games
  int timeforgames=((workingdays*63)+(holidays*127));
// difference from the nornms
int differencefromnorms=30000-timeforgames;
if(holidays<=40){
    cout<<"Toms sleep well "<<endl<<(differencefromnorms/60)<< " hours and"  <<  (differencefromnorms-(differencefromnorms/60)*60)  <<  " minutes less to sleep "<<endl;                                        
}
if(holidays>=113){
    cout<<"Toms will run away"<<endl;
    cout<<(differencefromnorms/60)<<"hours and"<<(differencefromnorms-((differencefromnorms/60)*60))<<"minutes for play";                                        
}
}
