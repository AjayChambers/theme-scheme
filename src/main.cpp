#include <iostream>


using namespace std;


int main(int argc, char *argv[])
{
    cout << "Number of arguments: " << argc << "\n";

    for (int i = 0; i < argc; ++i)
    {
        cout << "Arg " << i << ": " << argv[i] << "\n";
    }

    return 0;
}