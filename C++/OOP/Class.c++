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

int main()
{
    Player Ayoub;
    
       
       Ayoub.talk("Change it ");
        return 0;
}