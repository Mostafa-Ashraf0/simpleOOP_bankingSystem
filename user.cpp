using namespace std;
#include "user.h"
#include <iostream>
#include <vector>



User::User(int id, string name){
    user_id = id;
    user_name = name;
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
