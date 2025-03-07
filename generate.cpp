#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{

    if (argc != 4)
    {
        cout << "Please enter 3 parameters:\n";
        cout << "     Parameter 1 : total count of numbers you want.\n";
        cout << "     Parameter 2: min value.\n";
        cout << "     Parameter 3: max value.\n";
        cout << "Example: $ generate 10000000 100000 999999\n";
        exit(EXIT_SUCCESS);
    }

    for (int i = 0; i < argc; i++)
    {
        cout << "argv["<<i<<"]:" << argv[i] << endl;
    }

    int COUNT = stoi(argv[1]);
    int MIN = stoi(argv[2]);
    int MAX = stoi(argv[3]);

    ofstream fout;
    fout.open("numbers.dat", ios::out);

    for (int i = 0; i < COUNT; i++)
    {
        fout << (rand() % (MAX-MIN+1) + MIN) << endl;
    }

    fout.close();
    return 0;

}