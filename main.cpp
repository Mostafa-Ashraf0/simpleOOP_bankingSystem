#include <iostream>
using namespace std;
#include "user.h"
int main(){
    UserManager manager;
    manager.addUser(1000, "mostafa ashraf");
    manager.addUser(2000, "sondos ashraf");
    manager.addUser(3000, "fayza ashraf");
    manager.addUser(4000, ". ashraf");
    manager.addUser(1000, "mostafa ashraf hanafi");
    manager.showAllUsers();
    return 0;
}