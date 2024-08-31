// #include<iostream>

// using namespace std;

// float sumFactorial( int n){ // for_loop គេដឹងលក្ខខណច្បាស់លាស់
//     cout<< n <<" ! = ";
//     int  sum = 1;

//     for(int i = n; i>= 1; i--){
//         sum *= i;
//         cout<<i<<" ";
//         if (i  == 1){
//         cout<<"";
//     }else{
//         cout<<" * ";
//     }
//     }
    
//     cout<<" = "<<sum<<endl;
//     return sum;

// }
// void Menu(){
//     cout<<" 1. add"<<endl;
//     cout<<" 2. subreact"<<endl;
//     cout<<" 3. mutiplay"<<endl;
//     cout<<" 0. Eit"<<endl;
//     cout<<" .................."<<endl;
// }
// double Add( double a, double b ){// while loop ​​ គេប្រើវានៅពេលដែលគេមិនដឹងវាឈប់ពេលណា
//     return a + b;
// }
// double Subreact( double a, double b ){
//     return a - b;
// }
// double mutiplay( double a, double b ){
//     return a * b;
// }
// int main(){

// system("cls");
// system("color a");

// Menu();
// while(true){
// int choos;

// cout<<" Inter your choice :"<<endl;
// cin>>choos;
// system("cls");
// switch(choos){
//     case 1: {
//         double a,b;
//         cout<<" Inter two number "<<endl;
//         cin>>a>>b;
//         cout<<" Sum A + B ="<<Add(a,b)<<endl;
//         break;
//     }
//     case 2:{
//         double a,b;
//         cout<<" Inter two number "<<endl;
//         cin>>a>>b;
//         cout<<" Sum A - B ="<<Subreact(a,b)<<endl;
//         break;

//     }
//     case 3:{
//         double a,b;
//         cout<<" Inter two number "<<endl;
//         cin>>a>>b;
//         cout<<" Sum A * B ="<<mutiplay(a,b)<<endl;
//         break;
//     }
// }
// if(choos == 0 ){
//     break;
// }
// }
// // int con = 0;
// // while(con != 10){
// //     con++;
// //     cout<<con<<" ";
// // }
// // sumFactorial(5);

//     return 0;
// }

// do while loop​ វាខុសគេដោយសារ​ វាដំណើរការមួយជំុសិនបានសិក្សារលក្ខខណ្ឌ

#include<iostream>

using namespace std;

void Menu(){
    cout<<"===============| Choose |============="<<endl;
    cout<<"1. password "<<endl;
    cout<<"2. Rigister "<<endl;
    cout<<"0. Exiting "<<endl;
    cout<<" ========================"<<endl;
    cout<<" Enter your choose "<<endl;
}

string correctPassword;
string correctUssername;

void Login(){
    string username,password;
    cout<<"==============| Password |===================="<<endl;
    cout<<" Iput your password "<<endl;
    cin>>password;
    cout<<" Input your User name "<<endl;
    cin>>username;

    while(username != correctUssername || password != correctPassword){
        cout<<" Invelite password or Username "<<endl;

    cout<<" Iput your password "<<endl;
    cin>>password;
    cout<<" Input your User name "<<endl;
    cin>>username;
    }

    void registeruser(){
        cout<<"==================| Register |==============="<<endl;
        cout<<" Enter username "<<endl;
        cin>>correctUssername;
        cout<<" Enter password "<<endl;
        cin>>correctPassword;
        system("cls");
    }

}

int main(){

system("cls");
system("color a");

Menu();

    

    return 0;
}