#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Animal{
    private:
     string name;
     public:
     Animal(){
        cout<<" Dog :"<<endl;
     }

       Animal(string name){
        this->name = name;
        cout<<name;
      }

};

int main(){

    system("cls");
    system("color a");
    Animal an;
    Animal animal (" cat ");
    


    return 0;
}