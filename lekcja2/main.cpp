#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

vector<double> d_weX;
vector<double> d_weY;

struct punkt{
    double x, y;
};

vector<punkt> pkt;
int main()
{
    ifstream we("wuz2-zad-1-punktytxt.txt");

    punkt p[100];
    int i = 0;
    while (!we.eof())
    {
        we >> p[i].x >> p[i].y;
        d_weX.push_back(p[i].x);
        d_weY.push_back(p[i].y);
    }

    we.close();

    cout << p[0].x << " " << p[0].y << endl;
    return 0;
}
