#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
#include <set>
using namespace std;

int yMax = 100;
int xMax = 100;
int yMax_1 = yMax * 5 - 1;
int xMax_1 = xMax * 5 - 1;
int miniumPath = 3040;
int minPath = miniumPath;
int risk[500][500];
int maxvalue = 1000;

struct Point {
    int row, col, cost;
    int hashcode;
    int k;
    Point(const int row, const int col, int cost) : row(row), col(col), cost(cost) { hashcode = row * 1000 + col; k = 1; }
    bool operator == (const Point& p) const {
        return hashcode == p.hashcode;
    }

    bool operator< (const Point& p) const {
        return cost < p.cost;
    }
};


bool myfunction(const Point& p1, const Point& p2) { return p1.cost < p2.cost; }

vector<Point> get_neighbours(const Point& p)
{
    vector<Point> result;
    if (p.col > 0) result.emplace_back(Point(p.row, p.col - 1, risk[p.row][p.col - 1]));
    if (p.row > 0) result.emplace_back(Point(p.row - 1, p.col, risk[p.row - 1][p.col]));
    if (p.col < xMax_1) result.emplace_back(Point(p.row, p.col + 1, risk[p.row][p.col + 1]));
    if (p.row < yMax_1) result.emplace_back(Point(p.row + 1, p.col, risk[p.row + 1][p.col]));
    return result;

}

int nextnumber(int i_int)
{
    int itmp = i_int + 1;
    if (itmp == 10)
        itmp = 1;
    return itmp;
}

struct hash_point {
    std::size_t operator () (const Point& p) const {
        //return 1;//p.row;
        return p.row * 1000 + p.col;
    }
};

int main()
{
    std::string line;
    std::fstream file("C:/temp/input.txt");


    for (int i = 0; i < yMax; i++)
    {
        getline(file, line);
        for (int j = 0; j < xMax; j++)
        {
            risk[i][j] = stoi(line.substr(j, 1));
        }
    }

    for (int i = 0; i < yMax; i++)
    {
        for (int j = xMax; j <= xMax_1; j++)
        {

            risk[i][j] = nextnumber(risk[i][j - xMax]);
        }
    }
    for (int i = yMax; i <= yMax_1; i++)
    {
        for (int j = 0; j <= xMax_1; j++)
        {

            risk[i][j] = nextnumber(risk[i - yMax][j]);
        }
    }

    unordered_set<Point, hash_point> SS;
    auto debugpoint = Point(0, 0, risk[0][0]);
    SS.emplace(debugpoint);
    auto debugpoint1 = Point(0, 1, risk[0][0]);
    SS.emplace(debugpoint1);




    vector<Point> U;

    //unordered_set<int> S;
    unordered_set<Point, hash_point> S;
    auto start = Point(0, 0, risk[0][0]);
    auto finish = Point(yMax_1, xMax_1, risk[yMax_1][xMax_1]);

    S.emplace(start);




    for (auto n : get_neighbours(start)) {
        U.emplace_back(n);
    }
   

    while (!U.empty()) {
        std::sort(U.begin(), U.end(), myfunction);
        Point pp = U.front();
        if (pp == finish)
        {
            cout << "Result is  " << pp.cost;
            break;
        }
        // S.emplace(pp.row*yMax_1+ pp.col, pp.cost);
        S.emplace(pp);
        U.erase(U.begin());

        for (Point neighbour : get_neighbours(pp))
        {
            if (S.find(neighbour) == S.end())
            {
                int cost = maxvalue;
                for (Point ss : U) {
                    if (ss == neighbour) {
                        cost = ss.cost;
                        // update shortest path
                        if ((neighbour.cost + pp.cost) < cost)
                        {
                            ss.cost = neighbour.cost + pp.cost;
                        }

                        break;
                    }
                }
                //no path to this point found, add to U collection
                if (cost == maxvalue) {
                    Point temp(neighbour.row, neighbour.col, neighbour.cost + pp.cost);
                    U.emplace_back(temp);
                }

            }
        }
    }
    return 0;
}
