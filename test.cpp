#include <iostream>
using namespace std;

int main() {

    int num ; 
    char ch ;
    cout<< "enter number "<<endl;
    cin>>num;
    // cout<< "enter character "<<endl;
    // cin>>ch;
    if (ch >= 'a' && ch <= 'z'){
        cout<<"lowercase letter"<<endl;
    }else if (ch >= 'A' && ch <= 'Z'){
        cout<<"uppercase letter"<< endl;

    }else if (num >= 0 && num <= 9 ){
        cout<<"digit"<< endl;
        
    }else {
        cout<< " no value ";
    }
}
    // int a ; 
    // cout<< "enter value of a "<< endl;
    // cin>> a ;
    // if (a>0){
    //     cout<< "hello";
    // }
    //     else if (a<0){
    //         cout<<"kkkk"<<endl;
    //     }else {
    //         cout<<"hsjhhfh"<< endl; 
    //     }
    

//     int a, b;
//     a=cin.get();
// cout<<"vakue of a "<< a << endl ; 
// }
//     cin >> a >> b;

//     if (a > b) {
//         cout << "print" << endl;
//     } else {
//         cout << "hiii" << endl;
//     }

// cout<<"value of a and b  "<<a<<" "<<b;
// }