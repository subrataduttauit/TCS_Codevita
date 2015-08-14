#include<iostream>
using namespace std;
int n,mat[1000][1000],initial[1000][1000];
int temp[1000][1000];

void transpose();
void rotate(int);
int main(){
    int x,y,z;
    int total=0;
char c;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
        initial[i][j]=mat[i][j];
}
}
while(true){
    cin>>c;
    if(c=='A'){
        cin>>x;
        rotate(x);
        total+=x;
    }
    else if(c=='Q'){
        cin>>x>>y;
        cout<<mat[x-1][y-1]<<endl;
    }
    else if(c=='U'){
            cin>>x>>y>>z;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                mat[i][j]=initial[i][j];
        }
        mat[x-1][y-1]=z;
        rotate(total);
        
    }
    else
        break;
}
return 0;
}

void transpose(){
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        temp[j][n-i-1]=mat[i][j];
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        mat[i][j]=temp[i][j];
    }
 }
}
void rotate(int x){
int t=x/90;
t=t%4;
while(t--){
    transpose();
}
}
