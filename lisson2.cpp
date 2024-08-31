#include<iostream>
using namespace std;
    class Th{
        protected:
        int id;
        string name;
        string gender;
        float salary;
        public:
        void Input(){
            cout<<" Iput ID ";cin>>id;
            cout<<" Iput Name ";cin>>name;
            cout<<" Iput Gender ";cin>>gender;
            cout<<" Iput Salary ";cin>>salary;

        }
        void Output(){
            cout<<" Your ID     : "<<id<<endl;
            cout<<" Your Name   : "<<name<<endl;
            cout<<" Your Gander : "<<gender<<endl;
            cout<<" Your Salary : "<<salary<<endl;
        }
    };
    class Bi:protected Th{
        protected:
        int ot;
        public:
        void Input(){
            Th::Input();
            cout<<"Input OT :";cin>>ot;
        }
        void Output(){
            Th::Output();
            cout<<" Your OT :"<<ot<<endl;
        }
        void sum(){
            cout<<" Salary + OT : ="<<salary + ot <<endl;
        }
    };
int main(){
system("cls");
system("Color f4");
Bi bt1;
bt1.Input();
bt1.Output();
bt1.sum();
string name = "That";
int age = 23;
string university;
cout<<" My name is :"<<name<<endl;
cout<<" My age "<<age<<" is :"<<endl;
cout<<" My university is :"<<university<<endl;
    return 0;
}

