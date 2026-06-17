#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdig=n%10;
        sum+=lastdig;
        n=n/10;
    }
    cout<<"sum of digits is: "<<sum;
    cout<<endl;
    return 0;
}