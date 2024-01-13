#include<iostream>
using namespace std;


class Hero{


      private:
    public:
    string name;
    int age;
    //if the proparties is privite you cant acess the out side the class but you have one method whose name is getter and setter 

    int roll;
     void print(){
  cout<<roll<<" ";
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }

    void setname(string h){
        name=h;
    }
    void setage(int a){
        age=a;
    }
};









int main()
{
// Hero s1;

//this method describe the getter and setter 

// s1.name="dhiraj";
// s1.setname("dhiraj");
// s1.setage(23);
// cout<<"name is"<<" "<<s1.getname()<<endl;
// // s1.age=23;
// cout<<"age is"<<" "<<s1.getage()<<endl;
// s1.roll=45;at
// cout<<


//statical allocion 

Hero b;
b.setname("dhiraj");
b.setage(60);
cout<<"name is "<<b.name<<endl;
cout<<"age is "<<b.getname()<<endl;

//dynamically
Hero *c= new Hero;
c->setname("aditya");
c->setage(49);
cout<<"name is "<<(*c).name<<endl;
cout<<"age is "<<(*c).getname()<<endl;

cout<<"name is "<<c->name<<endl;
cout<<"age is "<<c->getname()<< endl;



}