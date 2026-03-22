#include<iostream>
using namespace std;
int main(){
    // int a = 15;
    // while (a=15){
    //     cout<<"print till n: "<< a  << endl;
    //     a=a+1;

    // }
    // int n;
    // cin>>n;
    // int i=1;
    // while (i<=n){
    //     cout<<"print till n: "<< i  << endl;
    //     i=i+1;

    // }
// prime number 
int n ;
cin>>n;
int i=2;
while(i<n){
    if(n%2==0){
        cout<<"not prime :"<<n<<endl;

    }else {
        cout<<"prime"<<n<<endl;
    }
}

}