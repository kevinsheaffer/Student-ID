#include<iostream>
#include<string>
#include "student.cpp"

using namespace std;
int main(){

   int n,i,id;
   string name;

   cout<<"Enter the capacity of dynamic array: ";
   cin>>n;

   Student *groups;

   cout<<"\n";
   groups=new Student[n];
   for(i=0;i<n;i++){
       // read student ID

       cout<<"Enter the student id: ";
       cin>>id;

       //break id 
       if(id==0)
           break;
      

       cout<<"Enter the student name: ";
       cin>>name;
       

       Student newStudent(id,name);

       // store object
       groups[i]=newStudent;
   }


   n=i;

   cout<<"\nThe students are:"<<endl;
   for(i=0;i<n;i++){
       groups[i].print_student();
   }
}
