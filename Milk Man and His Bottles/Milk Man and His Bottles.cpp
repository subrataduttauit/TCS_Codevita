/* 
 * Solution to TCS Codevita
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */



#include <iostream>
using namespace std;
int main(){
int N,Demand,code,left,L;
cout<<"Enter the no. of cases: ";
cin>>N;
for(int i=0;i<N;i++)
{
 cout<<"Enter the litres of Milk: ";
cin>>Demand;
code= Demand/10;
L=code;
code*=10;
Demand-=code;
switch (Demand){
case 1: left=1;
 break;
case 2: left=2;
 break;
case 3: left=3;
 break;
case 4: left=4;
 break;
case 5: left=1;
 break;
case 6: left=2;
 break; 
case 7: left=1;
 break;
case 8: left=2;
 break;
case 9: left=3;
 break;
}
L+=left;
cout<<L<<" Bottles required"<<endl;}
return 0;
}
