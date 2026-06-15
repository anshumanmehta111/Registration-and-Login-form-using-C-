//making a login page using cpp
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class temp{
    string UserName,Password,Email;
    fstream file;
    string searchName,pass,searchEmail;
    public:
    void login();
    void SignUp();
    void ForgotPassword();
}obj;

int main(){
    char choice;
    cout<<"\n 1- Login";
    cout<<"\n 2- Sign Up";
    cout<<"\n 3- Forgot Password";
    cout<<"\n 4- Exit";
    cout<<"Enter your choice : ";

    cin>>choice;
     switch(choice){
        case '1':
        obj.login();
        break;
        case '2':
        obj.SignUp();
        break;
        case '3':
        obj.ForgotPassword();
        break;
        case '4':
        return 0;
        break;
        default:
        cout<<"Invalid selection..... ";
     }
    
    return 0;
}
void temp :: SignUp(){
    cout<<"Enter your User Name - "<<endl;
    getline(cin,UserName);
    cout<<"Enter your Email "<<endl;
    getline(cin,Email);
    cout<<"ENter your Password "<<endl;
    getline(cin,Password);

    file.open("loginData.txt",ios :: out | ios::app);
    file<<UserName<<"*"<<Email<<"*"<<Password<<endl;
    file.close();
}

void temp :: login(){
    
    cout<<"Enter Your UserName "<<endl;
    getline(cin,searchName);
    cout<<"Enter Your Password  "<<endl;
    getline(cin,pass);
    file.open("loginData.txt",ios :: in);
    getline(file,UserName,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    while(!file.eof()){
        if(UserName==searchName){
            if(Password==pass){
                cout<<"Login successful "<<endl;
            }
            else{
                cout<<"Password is incorrect... "<<endl;
            }
        }
    getline(file,UserName,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    }
    file.close();
}
    void temp :: ForgotPassword(){
        cout<<"Enter your username : "<<endl;
        getline(cin,searchName);
        cout<<"Enter your email : "<<endl;
        getline(cin,Email);

        file.open("loginData.txt",ios::in);
        getline(file,UserName,'*');
        getline(file,Email,'*');
        getline(file,Password,'\n');

        while(!file.eof()){
            if(UserName==searchName){
                if(Email==searchEmail){
                    cout<<"Account found "<<endl;
                    cout<<"Your password is "<<Password<<endl;

                }else{
                    cout<<"Account not found "<<endl;
                }
            }else{
                    cout<<"Account not found "<<endl;
                }

        }
        file.close();

}