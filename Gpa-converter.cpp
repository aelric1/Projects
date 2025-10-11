#include<iostream>
using namespace std;

int main(){
float gpa , grade;
int u;
cout <<"Enter you grade : ";
cin >>grade;
cout<< "\nselect from their numbers"<<endl;
cout <<"1- "<<grade<<"/100\n"<<"2- "<< grade<<"/20\n"<<"3- else\n";
cin >> u;
switch (u){
case 1:
    if ( grade<= 20 && grade >=0){
        gpa=(grade*4)/100;
        cout <<" Gpa :"<<gpa<< endl;
    }
    else{
        cout<<"vlue inviled!\n";}
    break;
case 2:
    if ( grade<= 100 && grade >=0){
        gpa=(grade*4)/20;
        cout <<" Gpa :"<<gpa<< endl;
    }
    else{
        cout<<"vlue inviled!\n";}
    break;
case 3:
    if ( grade<= u && grade >=0){
        gpa=(grade*4)/u;
        cout <<" Gpa :"<<gpa<< endl;
    }
    else{
        cout<<"vlue inviled!\n";}
    break;

default:
    break;
}
    return 0;

}
