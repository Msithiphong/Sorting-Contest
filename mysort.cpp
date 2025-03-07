#include <iostream>
#include <fstream>

using namespace std;

void bubble(int A[], int size);


int main(int argc, char* argv[])
    {
        ofstream fout;
        ifstream fin;
        int* a = new int[1000000];
        int count = 0;

        fin.open(argv[1]);

        fout.open(argv[2], ios::out | ios::trunc);
        
        

        while (fin >> a[count])
        {
            count++;
        }
        
        bubble(a, count);


        
        for (int i = 0; i < count; i++)
        {
            fout << a[i] << endl;
            
        }

       

        fout.close();
        fin.close();

        cout << count << " numbers transferred from " << argv[1] << " to " << argv[2] << endl;
    }


void bubble(int A[], int size)
    {
        for (int i = 0; i < size - 1; i++)
            for (int j = 0; j < size - i - 1; j++)
            {
                if (A[j] > A[j + 1])
                    swap(A[j], A[j + 1]);
            }
        
        
       
    }

