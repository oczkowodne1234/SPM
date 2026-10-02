#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int wybor;
string pakiet;

int main()
{
    cout << "\n=== Simple Package Manager (SPM) ===" << endl;
    cout << "1. Install" << endl;
    cout << "2. Remove" << endl;
    cout << "3. Operating System Upgrade" << endl;
    cout << "0. Exit" << endl;
    cout << "=== Check for the newest updates at https://github.com/oczkowodne1234/SPM ! ===:"<<endl;
    cout << "Your choice: ";
    cin >> wybor;
    if (wybor == 0) {
        return 0;
    }
    
    if (wybor == 1) {
        cout << "Package name: ";
        cin >> pakiet;
        string komenda = "sudo pacman -S " + pakiet;
        system(komenda.c_str());
        return 0;
    }
    
    if (wybor == 2) {
        cout << "Package name: ";
        cin >> pakiet;
        string komenda = "sudo pacman -R " + pakiet;
        system(komenda.c_str());
        return 0;
    }

    if (wybor == 3) {
        cout << "Getting new Updates from pacman repository and upgrading them" << endl;
        system("sudo pacman -Syu");
        return 0;
    }

    return 0;
}
