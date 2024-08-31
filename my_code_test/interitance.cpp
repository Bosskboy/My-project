// #include<iostream>
// #include<string>
// using namespace std;

// class Engine{
//     public:
//         void speedUp(){
//             cout<<"SpeedUP "<<endl;
//         }
//         void SlowDonw(){
//             cout<<"SlowDonw"<<endl;

//         }
// };
// class Car: public Engine{
//     private:
//         int id;
//         string brand;
//         int releaseYear;
//     public:
//         Car(int id,string brand, int releaseYear){
//             this->id = id;
//             this->brand= brand;
//             this->releaseYear = releaseYear;
//         }
//         void GetDetails(){
//             cout<<" ID "<<id<<endl;
//             cout<<" Breank"<<brand<<endl;
//             cout<<" REleas Year "<<releaseYear<<endl;
//         }
    
// };
// class Vechicle: public Engine{
    

// };


// int main(){
//     system("cls");
//     system("color a");
   
//     Car bmw( 2," BMW", 2024);
//     bmw.GetDetails();
//     bmw.speedUp();
//     bmw.SlowDonw();

//     Vechicle v;
//     v.SlowDonw();
//     v.speedUp();
    
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// class Skin{
//     private:
//         string SkinName;
//         string SkinColor;
//     public:
//         void SetSkininfo(string SkinName,string SkinColor){
//             this->SkinName = SkinName;
//             this->SkinColor = SkinColor;

//         }
//         void getskindetails(){
//             cout<<" Skin name :"<<SkinName<<endl;
//             cout<<" Skin Color "<<SkinColor<<endl;

//         }

// };
// class Skill: public Skin{
//     private:
//         int numberofskills;
        
//     public:
//         void SetNumberofSkills(int numberofskills){
//             this->numberofskills = numberofskills;

//         }
//         void getNumberofSkills(){
//             cout<<" Number of skills "<<numberofskills<<endl;
//         }
    
// };
// class Hero: public Skin , public Skill{
//     private:
//         int id;
//         string name;
//     public:
//         void SetHeroinfo(int id, string name){
//             this->id = id;
//             this->name = name;
//         }
//         void getHerodetails(){
//             cout<<" =====> HERO Info <======"<<endl;
//             cout<<" Hero id "<<id<<endl;
//             cout<<" HERO nam :"<<name<<endl;
//         }

// };


// int main(){
//     system("cls");
//     system("color a");
//    Hero sun;
//    sun.SetHeroinfo(10," Sun");
//    sun.getHerodetails();
    
//    sun.SetNumberofSkills(4);
//    sun.getNumberofSkills();

//    sun.SetSkininfo("gooo","ggeee");
//    sun.getskindetails();
    
//     return 0;
// }

#include<iostream>
#include<string>

using namespace std;

// 

class Skin{
    private:
        string skinName;
        string skinColor;
    public:
        void setSkinInfo(string skinName, string skinColor){
            this->skinName = skinName;
            this->skinColor = skinColor;
        }
        void getSkinDetail() {
            cout << "Skin Name: " << skinName << ", Color: " << skinColor << endl;
        }
};

class Skill{
    private:    
        int numberOfSkills;
    public:
        void setNumberOfSkills(int numberOfSkills){
            this->numberOfSkills = numberOfSkills;
        }
        void getSkillDetail() {
            cout << "Number of Skills: " << numberOfSkills << endl;
        }
};

class Hero: public Skin, public Skill{
    private:
        int id;
        string name;
    public:
        void setHeroInfo(int id,string name){
            this->id = id;
            this->name = name;
        }
        void getHeroDetails() {
            cout<<"===> Hero Information\n";
            cout << "Hero ID: " << id << ", Name: " << name << endl;
        }
};



int main(){
    system("cls");
    Hero sun;
    sun.setHeroInfo(1, "Sun");
    sun.setSkinInfo("Legend","RGB");
    sun.setNumberOfSkills(4);
    // 
    sun.getHeroDetails();
    sun.getSkillDetail();
    sun.getSkinDetail();
    //
   
    return 0;
}
