// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>

// using namespace std;

// class User{
//     private:
//         int id;
//         string name,email,password,profile;
//         bool isDeleted,isVerified;

//     public:
//         void Setdata(int id ,string name,string email, string password, string profile, bool isDeleted, bool isVerified){

//             this->id         = id;
//             this->name       = name;
//             this->email      = email;
//             this->password   = password;
//             this->profile    = profile;
//             this->isDeleted  = isDeleted;
//             this->isVerified = isVerified;

//         }
//         void getdeta(){
            
//             cout<<" ID :"<<id<<endl;
//             cout<<" Name: "<<name<<endl;
//             cout<<" Email :"<<email<<endl;
//             cout<<" Password :"<<password<<endl;
//             cout<<" Profile :"<<profile<<endl;
//             cout<<" Is Deleted :"<<(isDeleted? "Yes" : "No")<<endl;
//             cout<<" Is Verified :"<<(isVerified? "Yes" : "No")<<endl;
//             cout<<"========================================"<<endl;
            
//         }
//         int getid(){
//             return id;
//         }

// };
// vector<User>users;

// void inseruserdata(const int n){

//     system("cls");
//     for(int i = 0; i<n; i++){
//         User u;
//         int id;
//         string name,email,password;
//         cout<<"===| Insert Data Of user |=== "<<i+1<<" ==="<<endl;
//         cout<<"[+] Insert User id :";cin>>id;
//         cin.ignore();
//         cout<<"[+] Inser Name user :" ; getline(cin,name);
//         cout<<"[+] Inser Email user :"; cin>>email;
//         cout<<"[+] Inser Password user :"; cin>>password;
//         u.Setdata(id,name,email,password,"https://www.google.com",false,true);
//         users.insert(users.end(),u);
//     }
// }
// void getUserData(){
//     for(User u: users){
//         u.getdeta();
//         cout<<endl;
//     }
// }
// void findUserByid(int id){
//     for(User u: users){
//         if(u.getid()==id){
//             u.getdeta();
//             return ;
//         }
//     }
// }
// void deletedByid(int id){
//     for(auto u=users.begin(); u!= users.end();){
//         if( u->getid()==id){
//             users.erase(u);
//             return ;
//         }else{
//             u++;
//         }
//     }
// }


// int main(){
//     system("cls");
//     system("color a");

//     int n;
//     cout<<"[+] Inser Number of user :";cin>>n;
//     inseruserdata(n);
//     cout<<"\n [+] Display User Data:"<<endl;
//     getUserData();
//     int id;
//     cout<<"[+] Enter user ID to deleted ";cin>>id;
//     deletedByid(id);
//     getUserData();

//     return 0;
// }

// 
#include<iostream>
using namespace std;

    class Pet{
        private:
            int id;
            string name ,color;
        public:
            // Pet(int id, string name,string scolor){
            //     this->id = id;
            //     this->name = name;
            //     this->color = color;

            // }
            Pet(){}
            displayPet(){
                cout<<id<<endl;
                cout<<name<<endl;
                cout<<color<<endl;
            }
    };
    int main(){
        system("cls");
        system("color a");
        Pet animal;
       
        animal.displayPet();


        return 0;
    }