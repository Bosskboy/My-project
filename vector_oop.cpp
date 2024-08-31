#include<iostream>
#include<vector>
using namespace std;

class Product{
    private:
        int id;
        string name;
        float  price;
        float  qulitity;
    public:
    void Setdata(int id, string name, float price, float qulitity){
            this->id = id;
            this->name = name;
            this->price = price;
            this->qulitity = qulitity;
    }
    void display(){
        cout<<" ID :"<<id<<endl;
        cout<<" Name :"<<name<<endl;
        cout<<" Price :"<<price<<endl;
        cout<<" Qulitity :"<<qulitity<<endl;
    }
};

int main(){
    system("cls");
    system("color a");

    vector<Product> Products;
    int n;
    cout<<"[+] Enter number of product :";cin>>n;
    for(int i = 0; i < n; i++){
        int id;
        string name;
        float  price;
        float  qulitity;
        cout<<" Product :"<<i+1<<endl;
        cout<<"[+] Insert product id :";cin>>id;
        cout<<"[+] Insert product name :";cin>>name;
        cout<<"[+] Insert product price :";cin>>price;
        cout<<"[+] Insert product qulitity :";cin>>qulitity;

        Product th;
        th.Setdata(id,name, price,qulitity);
        Products.insert(Products.end(),th);

    }
    for(Product c: Products ){
        
        c.display();
        cout<<" ===============================";
        cout<<endl;
    }



    return 0;
}