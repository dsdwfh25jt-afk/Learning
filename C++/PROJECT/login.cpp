#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User {
    private : 
    string username, password;
    public : 
    User(string name, string pass){
        username = name;
        password = pass;

    } 
    string getUsername(){
        return username;
    }    
    string getPassword(){
        return password;

    }
};
class UserManager{
    private : 

    vector <User> users ; // create object vector 

    public  : 
    void  RegisterUser (){
        string username , password ;
        cout << " Enter User Name : ";
        cin >> username;
        cout << " Enter Password : ";
        cin >> password ;
        User newUser(username , password);
        users.push_back(newUser);

        cout << " \t\t User Registerd Sucssefully !"<< endl;

    }

    bool loginUser(string name , string pass) {

        for ( int i = 0 ; i < users.size(); i++) {
            if (users[i].getUsername() == name && users[i].getPassword()==pass) {
                cout << " LogIn Successfully !"<<endl;
                return true;

            }
        }
        cout << "Invalid UserName Or Password !!!" <<endl;
        return false;

    }
    void showUser() {
        cout << " User List "<<endl;
        for ( int i = 0 ; i < users.size(); i++) {
            cout << users[i].getUsername() <<endl;
        }
    }
    void searchUser(string name){
        for ( int i = 0 ; i < users.size(); i++) {
            if ( users[i].getUsername() == name) {
                cout << "User found ... Name is "<<name<<endl;
                return;

            }
        }
        cout << "User Not Found ! "<< endl;
    }
    void deleteUser(string username){
         for ( int i = 0 ; i < users.size(); i++) {
            if ( users[i].getUsername() == username) {
                
                users.erase(users.begin()+i);
                
                cout << "User found ... and has beed deleted !"<<endl;
                return;

            }
        }
        cout << "User Not Found ! "<< endl;
    }

};
int main () {
UserManager usermanage ;
int op;
char choice;

do {
    cout << " 1] Register User " << endl;
    cout << " 2] Log in "<<endl;
    cout << " 3] User list "<<endl;
    cout << " 4] Search user "<<endl;
    cout << " 5] Delete user "<<endl;
    cout << " 6] Exit "<<endl;

    cout << " Enter Your Choice ";
    cin >> op;

switch (op){
    case 1 :{
        usermanage.RegisterUser();
        break;
    } 
    case 2: {
        string username, password;
        cout << " Enter Your Username : ";
        cin >> username;
        cout << "Enter your password : ";
        cin >> password;
        usermanage.loginUser(username, password);
        break;
    }
    case 3:{
        usermanage.showUser();
        break;
    }
    case 4:{
        string searchUser;
        cout << "Enter the username that you want to Search : ";
        cin>>searchUser;
        usermanage.searchUser(searchUser);
        break;
    }
    case 5:{
        string username;
        cout << "Enter the user name that you want to delete : ";
        cin >> username;
        usermanage.deleteUser(username);
        break;
    }
    case 6:{
        system("cls");
        exit(1);
        break;
    }

    

        
}
    cout << "Do you want to contine ...? [Y] / [N] : ";
    cin >> choice;
    system("cls");
}while (choice == 'y' || choice == 'Y');


}
