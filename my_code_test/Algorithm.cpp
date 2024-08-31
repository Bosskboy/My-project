#include<iostream>
using namespace std;

void rangerstudent(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
system("cls");

int student[]= {1,2,4,5,3};
cout<<" Original array";
rangerstudent(student,5);
int rankStudents2[] = {5, 3, 1, 4, 2, 6, 8, 9, 10, 12, 11, 14, 15, 20, 30, 19};

    int sizeTotal = sizeof(rankStudents2);
    int sizeElement = sizeof(rankStudents2[0]);

    int numberElements = sizeTotal / sizeElement;
    cout << "Size of rankStudents2 array: " << sizeTotal << endl;
    cout << "Size of element: " << sizeElement << endl;
    cout << "Number of elements: " << numberElements << endl;

for(int i = 0 ; i < numberElements; i++){
    for( int j = 0; j < numberElements-1; j++){
        if(rankStudents2[j] > rankStudents2[j + 1]){
            int temp = rankStudents2[j];
            rankStudents2[j] = rankStudents2[j+1];
            rankStudents2[j+1] = temp;
        }
    }
}
cout<<" shoted array :";
rangerstudent(rankStudents2,numberElements);



    return 0;
}