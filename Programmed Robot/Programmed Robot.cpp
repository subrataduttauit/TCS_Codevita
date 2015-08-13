/* 
 * Solution to TCS Codevita
 * by Subrata Dutta
 * 
 * University Institute of Technology, Burdwan University
 * Dept. of Information Technology
 * https://github.com/subrataduttauit
 * https://in.linkedin.com/in/subrataduttauit
 */




#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int f[100],b[100],t[100],fd[100],bd[100],n,time;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>f[i]>>b[i]>>t[i]>>fd[i]>>bd[i];
	}
	for(int i=0;i<n;i++){
		int init=0;
		int newinit=0;
		int time=0;
		while(abs(init) < fd[i]){
			if(init < fd[i]){
				time+=t[i]*f[i];
				init+=f[i];
			}
			if(init > fd[i]){
				   newinit=init-fd[i];
				   cout<<time-(newinit*t[i])<<" F\n";
			           break;	
			}
			else if(init == fd[i]){
				   newinit=init;
				   cout<<time<<" F\n";
			           break;
			}
			if(init < bd[i]){
				time+=t[i]*b[i];
				init-=b[i];
			}
			if(abs(init) >= bd[i]){
				   newinit=abs(init)-abs(bd[i]);
				   cout<<time-(newinit*t[i])<<" B\n";
				   break;
			}
			else if(abs(init)== bd[i]){
				   newinit=abs(init);
				   cout<<time<<" B\n";
				   break;
			}
			if(f[i]==b[i]){
				cout<<"No Ditch\n";
				break;				
			}
		}
	}
	return 0;
}
