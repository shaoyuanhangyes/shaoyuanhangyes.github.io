#include <iostream>
#include <string>
using namespace std;
class MyStr{
private:
    string name;
public:
    MyStr();
    MyStr(string n);
    MyStr(const MyStr &s);
    ~MyStr();
    MyStr operator=(const MyStr &s){
        this->name=s.name;
        cout<<"���ظ�ֵ�����="<<endl;
        return *this;
    }
    friend ostream &operator<<(ostream &os,const MyStr &s){
        os<<s.name<<" & "<<&s.name<<endl;
    }
};
MyStr::MyStr(){
    name="syh";
    cout<<"Ĭ���޲ι��캯��"<<endl;
}
MyStr::MyStr(string n){
    name=n;
    cout<<"�в������캯��"<<endl;
}
MyStr::~MyStr() {
    cout<<"������������"<<endl;
}
MyStr::MyStr(const MyStr &s) {
    name=s.name;
    cout<<"�������캯��"<<endl;
}
int main() {
    MyStr str1;
    MyStr str2("outlook");
    MyStr str3=str2;
    MyStr str4;
    str4=str2;
    cout<<str1<<str2<<str3<<str4;
    return 0;
}
