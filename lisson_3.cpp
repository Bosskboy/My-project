#include<iostream>
using namespace std;
int main(){
    system("cls");
int n;
cout<<" Input number :"<<endl;cin>>n;
cout<<"Your star is :"<<n<<endl;
for(int i = 1; i <= n; i++){
    cout<<endl;
    for(int j = 1; j <= i; j++){
        cout<<" *";
    }
}
    return 0;
}