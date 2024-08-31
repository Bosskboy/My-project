#include<iostream>
#include<vector>
#include<string>

using namespace std;

// class Employee{
//     private:
//         int id,age;
//         string name,email;
//         float salary;
//     public:
//         Employee(int id,int age,string name, string email,float salary):id(id),age(age),name(name),email(email),salary(salary){}

//     void Info(){
//         cout<<"Id :"<<id<<endl;
//         cout<<"Age :"<<age<<endl;
//         cout<<"Name :"<<name<<endl;
//         cout<<"Gmail."<<email<<endl;
//         cout<<"Salary :"<<salary;

//     }

// };

// int main(){
//     system("cls");
//     system("color a");
//     Employee ch(001,19," Chan that","Chan@gamil.com",1999);
//     ch.Info();


//     return 0;
// }
// class Utils{
//     private:
//         int a,b;
//     public:
//         int sum(int a,int b){
//             int c = a + b;
//             return c;
//         }
//         int spuare(int c){
//             int d = c * c;
//             return d;

//         }
//         float Exchang(int a){
//             float Khr = 4000; 
            
//             float num = a / Khr;
//             return num ;

//         }


// };
// int main(){
//     system("cls");
//     system("color a");
   
//     Utils b;
//     cout<<b.sum(22,23)<<endl;
//     cout<<b.spuare(5)<<endl;
//     cout<<b.Exchang(18060)<<" $"<<endl;



//     return 0;
// }
class Pet{
    private:
        int id;
        string name, color,type;
    public:
     Pet(int id, string name, string color , string type){
        this->id = id;
        this->name = name;
        this->color = color;
        this->type = type;
    }
      Pet(){};

      void getPetDetail(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Color :"<<color<<endl;
        cout<<"Type :"<<type<<endl;

      }  


};


int main(){
    system("cls");
    system("color a");
    Pet th(190," KIKI","RED","Ckikern");
    th.getPetDetail();


    return 0;
}