// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;

int minPath, nodes_left_in_layer = 1, nodes_in_next_layer = 0, n;
int startR, startC, endR, endC;
char** maze;
bool** visited;
list <int> queueR;
list <int> queueC;
int dr[4] = { -1, 1, 0, 0 };
int dc[4] = { 0, 0, 1, -1 };

void findNeighbours(int r, int c)
{
    for (int i = 0; i < 4; i++)
    {
        int rr = r + dr[i];
        int cc = c + dc[i];
        if (rr >= 0 && cc >= 0 && rr < n && cc < n)
        {
            if (!(visited[rr][cc]) && maze[rr][cc] != '=')
            {
                queueR.push_back(rr);
                queueC.push_back(cc);
                visited[rr][cc] = true;
                nodes_in_next_layer++;
            }
        }
    }
}

int bfs(int size, int startR, int startC, int endR, int endC)
{
    int move_count = 0;
    bool finished = false;
    queueR.push_back(startR);
    queueC.push_back(startC);
    visited[startR][startC] = true;
    while (!queueR.empty())
    {
        int r = queueR.front();
        int c = queueC.front();
        queueR.pop_front();
        queueC.pop_front();
        if (maze[r][c] == 'E')
        {
            finished = true;
            break;
        }
        findNeighbours(r, c);
        nodes_left_in_layer--;
        if (nodes_left_in_layer == 0)
        {
            nodes_left_in_layer = nodes_in_next_layer;
            nodes_in_next_layer = 0;
            move_count++;
        }
       
    }
    if (finished)
        return move_count;
    else
        return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char curr;
    cin >> n;
    maze = new char*[n];
    visited = new bool* [n];
    for (int i = 0; i < n; i++)
        maze[i] = new char[n];
    for (int i = 0; i < n; i++)
        visited[i] = new bool[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            if (curr == '#')
                curr = '=';
            else if (curr == '.')
                curr = '0';
            else if (curr == 'S')
            {
                startC = j;
                startR = i;
            }
            else if (curr == 'E')
            {
                endR = i;
                endC = j;
            }
            maze[i][j] = curr;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            visited[i][j] = false;
    int steps = bfs(n, startR, startC, endR, endC);
    if (steps == -1)
        cout << "There is no path, Andy!" << "\n";
    else
        cout << steps << "\n";
    return 0;
}

