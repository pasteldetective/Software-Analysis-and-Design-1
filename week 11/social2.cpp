#include <iostream>
using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

class Network
{
    private:
    int numUsers;
    static const int maxUsers = 20;
    Profile profiles[maxUsers];

    // Returns user ID (index in the 'profiles' array) by their username
    // (or -1 if username is not found)
    int findID (string usrn)
    {
        for (int i = 0; i < maxUsers; i++)
        {
            if (profiles[i] == usrn)
            {
                return i;
            }
            else
            {
                return -1;
            }
        }
    }
    public:
    //make empty network of numUser = 0;
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);

};

Profile::Profile()
{
    username = "";
    displayname = "";
}

Profile::Profile( string usrn, string dspn)
{
    username = usrn;
    displayname = dspn;
}

string Profile::getUsername()
{
    return username;
}

string Profile::getFullName()
{
    string concat = displayname + " (@" + username + ")";
    return concat;
}

void Profile::setDisplayName(string dspn)
{
    displayname = dspn;
}

Network::Network()
{
    numUsers = 0;
}

bool Network::addUser(string usrn, string dspn)
{
    //profiles[1].getUsername();
    //profiles[2].setDisplayName(dspn);
    for (int i = 0; i < maxUsers; i++)
    {
        if (profiles[i] == "")
        {
            profiles[i].getUsername();
            profiles[i].setDisplayName(dspn);
            return 1;
        }
        else if (profiles[i] != "" || profiles[i] == usrn)
        {
            return 0;
        }
    }
}

int main() {
    /*
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
    */

    Network nw;
    cout << nw.addUser("mario", "Mario") << endl;     // true (1)
    cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

    cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
    cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

    for(int i = 2; i < 20; i++)
    {
       cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1) 
    }

    cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}