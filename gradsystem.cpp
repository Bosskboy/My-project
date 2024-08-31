#include<iostream>
using namespace std;
 
void small_title(string title);// title

float sumscore(float math, float khmer, float english);//sum score

float Avgscore(float total_score)// Avg score
{
    return total_score / 3;
}

void Grad(float Avgscore_1)//Gred score
{
    if(Avgscore_1 >= 90 && Avgscore_1 <= 100 ){
        cout<<" Grad A ";
    }
    if(Avgscore_1 >= 80 && Avgscore_1 <= 89 ){
        cout<<" Grad B ";
    }
    if(Avgscore_1 >= 70 && Avgscore_1 <= 79 ){
        cout<<" Grad C ";
    }
    if(Avgscore_1 >= 60 && Avgscore_1 <= 69 ){
        cout<<" Fill ";
    }
}

float studentInfo(float math, float khmer, float english)//sum of subjec score
{
    cout<<"==============| Informetion student |==============="<<endl;
    cout<<" Math Score :"<<math<<endl;
    cout<<" Khmer Score :"<<khmer<<endl;
    cout<<" English Score :"<<english<<endl;

    cout<<" -------------------------------------------"<<endl;
    float total_score = sumscore(math,khmer,english);
    cout<<" Total Score ="<<total_score<<endl;

    float Avgscore_1 = Avgscore (total_score);
    cout<<" AVG Score = "<<Avgscore_1<<" %"<<endl;
    Grad(Avgscore_1);
}

int main(){
system("cls");
system("color f4");

string student_name;
float math;
float khmer;
float english;

small_title(student_name);
cout<<" Input student name ";
getline(cin, student_name);
cout<<" Input your math score :";cin>>math;
cout<<" Input your khmer score :";cin>>khmer;
cout<<" Input your english score :";cin>>english;

studentInfo(math,khmer,english);
    return 0;
}
void small_title(string title){
    cout<<"==============|"<<title<<"|==============="<<endl;
}
float sumscore(float math, float khmer, float english){
    return math + khmer + english;
}