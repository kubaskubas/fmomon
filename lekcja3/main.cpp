#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<string> d_weX;
vector<string> d_weY;
vector<int> tab;

struct punkt{
    string x, y;
};

vector<punkt> pkt;
int main()
{
        ifstream we("slowa-txt.txt");

    punkt p[100];
    int i = 0;
    while (!we.eof())
    {
        we >> p[i].x >> p[i].y;
        d_weX.push_back(p[i].x);
        d_weY.push_back(p[i].y);
        pkt.push_back({p[i].x, p[i].y});
        i++;
    }

    we.close();

    for(auto& item : pkt){
        cout << item.x << endl << item.y << endl;
    }

    return 0;
}
