#include<iostream>
using namespace std;
class Student{
int rollno;
string name;
public:
friend istream& operator>>(istream& in, Student& s);
friend ostream& operator<<(ostream& out, Student& s);
};
istream& operator>>(istream& in, Student& s){
cout<<"Enter Roll Number: ";
in>> s.rollno;
cout<<"Enter Name: ";
return in;
}
ostream& operator<<(ostream& out, Student& s){
out<<"\nStudent Details\n";
out<<"Roll Number : "<<s.rollno<<endl;
out<<"Name        : "<<s.name<<endl;
return out;
}
int main(){
Student s;
cin>>s;
cout<<s;
return 0;
}
