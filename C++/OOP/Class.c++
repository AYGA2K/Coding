#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
class Player
{
private:

    string name {"Ayoub"};
    int xp;
    int age;


public:
    void talk(string Message)
    {
        cout <<name<<" said: " <<Message << endl;

    }
};
int main(int argc, char const *argv[])

{
    Player Ayoub;
    Ayoub = Player()  ;


       Ayoub.talk("Change it ");
        return 0;
}
