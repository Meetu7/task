#include<iostream>
using namespace std;

class teacher1
{
    protected:
    int get_marks_teacher1;
    public:
    void getmarks()
    {
        cout<<"Enter the marks get from teacher1";
        cin>>get_marks_teacher1;
    }
    void display()
    {
        cout<<"get marks form teacher1 is = "<<get_marks_teacher1<<endl;
    }
};
class teacher2
{
    protected:
    int get_marks_teacher2;
    public:
    void getmarksteacher2()
    {
        cout<<"Enter the marks";
        cin>>get_marks_teacher2;
    }
    void display1()
    {
        cout<<"get marks teacher2 is =  "<<get_marks_teacher2<<endl;
    }
};
class child:public teacher1,public teacher2
{
    int my_marks;
    public:
    void mymarks()
    {
        my_marks=get_marks_teacher2+get_marks_teacher1;
        cout<<"Total marks is = "<<my_marks<<endl;
    }
};
int main()
{
    child obj;
    obj.getmarks();
    obj.getmarksteacher2();
    obj.display();
    obj.display1();
    obj.mymarks();

    return 0;

}