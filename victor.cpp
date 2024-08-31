#include<iostream>
#include<vector>

using namespace std;

int main(){
    system("cls");
    system("color a");

vector <string> names = {"zono" , "kola"};
// original vector
cout<<"Original vector "<<endl;
for(int i = 0; i < names.size(); i++){
    cout<<names[i]<<endl;
}

// add back vector
cout<<" Add back vector "<<endl;
names.push_back("kaka");
for(int i = 0; i < names.size(); i++){

    cout<<names[i]<<endl;
}

cout<<" add firs vector :"<<endl;
//names.push_back(" Koka");
// add firs vector 
names.insert(names.begin(),"Boy ");
for(int i = 0; i < names.size(); i++){

    cout<<names[i]<<endl;
}
    return 0;
}