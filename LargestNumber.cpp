#include<iostream>

int main(){
using namespace std;
int a,b,c;
cout<<"enter and three numbers a,b,c: ";
cin>>a>>b>>c;
if(a>b){
        if(b>c)
    cout<<"a contains the largest number";
}
if(b>c)
    cout<<"b contains the largest number ";
else
    cout<<"c contains the largest number";
return 0;
}
