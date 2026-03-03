using namespace std;
#include "user.h"
#include <iostream>
#include <vector>



User::User(int id, string name){
    user_id = id;
    user_name = name;
}

int User::getId(){
    return user_id;
}

void User::setName(string Uname){
    user_name = Uname;
}

void User::display(){
    cout << "User Id: " << user_id << endl;
    cout << "User Name: " << user_name << endl;
}

void UserManager::addUser(int id, string name){
    User u(id, name);
    users.push_back(u);
}

void UserManager::showAllUsers(){
    for(int i=0; i<users.size(); i++){
        users[i].display();
    }
}

void UserManager::editUser(int id, string Uname){
    for(int i=0; i<users.size(); i++){
        if(users[i].getId() == id){
            users[i].setName(Uname);
        }
    }
}
