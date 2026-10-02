#include<iostream>
using namespace std;
// int main(){
//     int n ;
//     int i = 1;
//     cin>>n ;
//     while(i<=n){
//         int j=1 ;
//         while(j<=n ){
//             cout<<n-j+1;
            
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// int main() {
//     int i = 1;
//     int n;
//     cin >> n;

//     while (i <= n) {
//         int j = 1;
       
//         while (j <= n) {
//             cout <<i;
//             j=j+1;
//         }

//         cout << endl;
//         i++;
//     }
// }
int main(){
    int i=1;
    int n; 
    cin>>n;
    while (i<=n){
        int j=1;
        int value =i;
        while (j<=n){
            char ch = 'A' + value  - 1;
            cout<<ch;
            value++;
            j=j+1;

        }
        cout<<endl;
        i++;
    }
}