// #include<iostream>
// using namespace std;


// int main(){
//  system("cls");
//  system("color a");
// Assiging values to the arrey
//  float marks[5];
// // 
//  marks[0] = 79.9;
//  marks[1] = 89.9;
//  marks[2] = 99.9;
//  marks[3] = 59.9;
//  marks[4] = 59.9;

//  string names[5] = {"Jonh"," Ling ", " karina","boom"," Boy"};

// //  cout<<" Name :"<<names[4]<<endl;
// //  cout<<" Marks  :"<<marks[4]<<endl;

// for(int i = 0; i < 5; i++){
//     cout<<" Name :"<<names[i]<<endl;
//     cout<<" Marks:"<<marks[i]<<endl;
//     cout<<"=================="<<endl;
// }
//     return 0;
// }
#include<iostream>

using namespace std;

int main(){

system("cls");
system("color a");
//    role,colem
//note ji
int n [5][2] ={{1,2},{3,4},{5,6},{7,8},{9,10}};

for(int i = 0; i < sizeof(n)/ sizeof([0]); i++){
    for(int j = 0; j < sizeof(n[0])/ sizeof(n[0][0]) ; j++){
        cout<<n[i][j]<<" ";
    }
    cout<<endl;
}

// float marks[5];

// marks[0]= 89.7;
// marks[1]= 69.7;
// marks[2]= 99.7;
// marks[3]= 79.7;
// marks[4]= 59.7;

// string names[5] = {"That","chan","kiboy","k_boy","Lancelot"};

// for(int i = 0; i < 5; i++){
//     cout<<" Name : "<<names[i]<<endl;
//     cout<<" score :"<<marks[i]<<endl;
//     cout<<"===================="<<endl;
// }


// test
// side of array
// cout<<" size of arry"<<sizeof( marks)<<endl;
// // adres of array
// cout<<" Address of marks "<<marks<<endl;   //if write like this it will be do marks[0]

// cout<<" Address of marks "<<&marks[0]<<endl;
// cout<<" Adres of marks "<<&marks[1]<<endl;
// cout<<" Adres of marks "<<&marks[2]<<endl;
// cout<<" Adres of marks "<<&marks[3]<<endl;
// cout<<" Adres of marks "<<&marks[4]<<endl;
    return 0;
}