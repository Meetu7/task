#include<iostream>
using namespace std;


class student
{
    public:

    int id;
    string name;

     void getdeta()
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        cout<<"Enter the name"<<endl;
        cin>>name;
    }
    void setdata(){
    cout<<"id is :-"<<id<<endl<<"name is :-"<<name<<endl;
    }
};
int main()

{
    student s1,s2,s3,s4,s5;
    s1.getdeta();
    s1.setdata();
    s2.getdeta();
    s2.setdata();
    s3.getdeta();
    s3.setdata();
    s4.getdeta();
    s4.setdata();
    s5.getdeta();
    s5.setdata();
    

    return 0;
}