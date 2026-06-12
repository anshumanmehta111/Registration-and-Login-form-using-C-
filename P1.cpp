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
    cout<<"\n 4- Exit" <<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cin.ignore();
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
    cout<<"Enter your User Name - ";
    getline(cin,UserName);
    cout<<"Enter your Email - ";
    getline(cin,Email);
    cout<<"Enter your Password - ";
    getline(cin,Password);

    file.open("loginData.txt",ios :: out | ios::app);
    file<<UserName<<"*"<<Email<<"*"<<Password<<endl;
    file.close();
    cout<<"SignUp Successfully"<<endl;
}

void temp :: login(){
    
    cout<<"Enter Your UserName ";
    getline(cin,searchName);
    cout<<"Enter Your Password  ";
    getline(cin,pass);
    bool found=false;
    file.open("loginData.txt",ios :: in);
    while(getline(file,UserName,'*')){
        getline(file,Email,'*');
        getline(file,Password,'\n');
        if(UserName==searchName){
            found=true;
            if(Password==pass){
                cout<<"Login successful "<<endl;
            }
            else{
                cout<<"Password is incorrect... "<<endl;
            }
            break;   
        }
    }
    if(!found){
        cout<<"UserName not found "<<endl;
    }
    file.close();
}
    void temp :: ForgotPassword(){
        cout<<"Enter your username : ";
        getline(cin,searchName);
        cout<<"Enter your email : ";
        getline(cin,searchEmail);
        bool found=false;

        file.open("loginData.txt",ios::in);
        
        while(getline(file,UserName,'*')){
            getline(file,Email,'*');
            getline(file,Password,'\n');
            if(UserName==searchName && Email==searchEmail ){
                found=true;
                    cout<<"Account found "<<endl;
                    cout<<"Your password is "<<Password<<endl;
                    break;
                }
            }

            if(!found){
            cout<<"No User Found";
        }
        file.close();

}