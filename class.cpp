// #include<iostream>
// using namespace std;

// class Person{
//     public:
//     int id;
//     string name;
//     float salary;

//     void input(){
//         cout<<" Input id ";cin>>id;
//         cin.ignore();
//         cout<<" Input name ";getline(cin,name);
//         cout<<" Input salary ";cin>>salary;
//     }
//     void Display(){
//         cout<<" Your id :"<<id<<endl;
//         cout<<" Your name :"<<name<<endl;
//         cout<<" Your salary is :"<<salary<<endl;

//     }

// };
// class Person:info{
//     public:
//      float ot;
//     void input(){
//         Person::input();
//         cout<<" Iput ot "<<endl;
//         cin>>ot;
//     }
//     void output(){
//         Person::output();
//         cout<<" your ot is "<<ot<<endl;

//     }
//     void Sum(){
//         sum = ot + salary;
//         cout<<" OT + salary "<<ot + salary<<endl;
        
//     }

// };

// int main(){

//     system("cls");
//     system("color a");

//     Person pm;
//     pm.input();
//     pm.Display();


//     return 0;
// }

#include<iostream>
using namespace std;

class Pesorn{
    private:
        int age;
        string name;
        string gmail;
        int n;
    public:
        void setData(){
            cout<<"  How many you want setup :";cin>>n;
            for(int i = 0 ; i < n; i++){
                cout<<" Person "<<i+1<<endl;
                cout<<" Input age :";cin>>age;
                cout<<" Input name :";
                cin.ignore();
                getline (cin,name);
                cout<<" Input gmail: ";cin>>gmail;
                cout<<"================================"<<endl;
                system("cls");
            }
            
        }
        void displaydata(){
            
            for(int i =0; i<n; i++){
                 cout<<" person :"<<i+1<<endl;
                 cout<<" Age :"<<age<<endl;
                 cout<<" Name :"<<name<<endl;
                 cout<<" Gmail :"<<gmail<<endl;
                 cout<<"==================================="<<endl;
            }
           
        }

};



int main(){

system("cls");
system("color a");

    Pesorn general;
    general.setData();
    general.displaydata();


    return 0;
}