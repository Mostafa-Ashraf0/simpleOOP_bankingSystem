using namespace std;
#include <string>
#include <vector>
#include <iostream>

class User{
    private: 
        int user_id;
        string user_name;
    public:
    User(int id, string name);

    //methods
    void display();
};

class UserManager{
    private:
        vector<User> users;
    public:
        //methods
        void addUser(int id, string name);
        void showAllUsers();

};
