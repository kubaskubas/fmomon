#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    cout << "zadanie 1" << endl;
    vector<int> tab;
    int x;
    ifstream file("liczby.txt");
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<5; j++)
        {
            file >> x;
            tab.push_back(x);
        }
    }
    file.close();
    for (int i=0; i<10*5; i++){
        cout << tab[i] << "";
    }

    ofstream plik("pusto.txt");
    for (int i=0; i<10*5; i++){
        plik << tab[i];
    }

    return 0;
}
