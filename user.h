using namespace std;
#include <string>
#include <iostream>

class user{
    private: 
        int user_id;
        string user_name;
    public:
    user(int id, string name){
        user_id = id;
        user_name = name;
    }

    //methods
    void displey(){
        cout << 'User Id: ' << user_id << endl;
        cout << 'User Name: ' << user_name << endl;
    }
};
