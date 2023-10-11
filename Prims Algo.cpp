// Prim's Algorithm in C++
#include <cstring>
#include <iostream>
using namespace std;
#define INF 9999999
#define V 5

int G[V][V] = {
  {0, 7, 69, 0, 0},
  {7, 0, 75, 19, 42},
  {69, 75, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};

int main() {
  int edge_n;  
  int selected[V];
  memset(selected, false, sizeof(selected));
  // set number of edge to 0
  edge_n = 0;

  selected[0] = true;

  int x; 
  int y; 
  // print for edge and weight
  cout << "Edge"
     << " : "
     << "Weight";
  cout << endl;
  while (edge_n < V - 1) {
    int min = INF;
    x = 0;
    y = 0;
    for (int i = 0; i < V; i++) {
      if (selected[i]) {
        for (int j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) {
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    cout << x << " - " << y << " :  " << G[x][y];
    cout << endl;
    selected[y] = true;
    edge_n++;
  }
  return 0;
}
