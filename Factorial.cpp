#include<iostream>

int main(){
using namespace std;
int number, factorial=1;
cout<<"enter any number: ";
cin>>number;
while(number>0){
    factorial = factorial * number;
    --number;
}
cout<<"the factorial is: "<<factorial;
return 0;
}
