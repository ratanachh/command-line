
#include "libs.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // for (int i = 0; i < argc; ++i)
    // {
    //     cout << argv[i]<<endl;
    // }
    string currentPath = get_current_dir();

    replace(currentPath, WC_PATH, "");

    if (currentPath.find("/") != std::string::npos)
    {
        cout << "Invalid project path: " << get_current_dir() << endl;
    }

    string logPath = string_format((WC_PATH + currentPath + LOG_PATH), 4);
    cout << logPath;

    return 0;
}


