#include<iostream>
using namespace std;

//1.function prototype 

// void usfunction();  //(Function has no return value and no paramater)

// void usname(string name,int pin);//(Function has no return value and has paramater)

//float my_pro();//(Function has  return value and has no paramater)

float Tax(float salary);//(Function has  return value and has  paramate)

int main(){
system("cls");
system("color f4");


//3.Call Function
// usfunction();
// string name; //keybort input
//     int pin;
//     cout<<" Inpter name ";
//     getline (cin,name);
//     cout<<" Input pin: ";cin>>pin;
//     usname(name,pin);

// auto input
// usname("That", 123);
// string name = "Kboy";
// usname(name,127);  

// float salary =  my_pro();
// cout<<" Your salary is :"<<salary<<endl;

float salary;
cout<<" Input salary :";cin>>salary;
Tax(salary);
float Paytix = Tax(salary);
cout<<" Your have pay tax :"<<Paytix<<endl;

    return 0;
}

 //2.Function Definition
// void usfunction(){
//     cout<<" Hello from function"<<endl;
// }
// void usname(string name,int pin){
//     if(pin == 123){
//         cout<<" Hello "<<name<<" Wellcome to my hous"<<endl;
//     }else{
//         cout<<"Wrong pin "<<name<<" try agin"<<endl;
// }
// }
// float my_pro(){
//     return 1000 + 500;
// }
float Tax(float salary){
    float tax = 0.2;
    return salary * tax;
}
