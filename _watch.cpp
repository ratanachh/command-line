
#include "libs.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; ++i)
    {
        cout << argv[i]<<endl;
    }
    string currentPath = get_current_dir() + "/4_exabanque.log";

    cout << currentPath << endl;
    return 0;
}


