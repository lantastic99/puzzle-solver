//includes main function that runs program.
#include "uflip-side.h"

using namespace std;

int main(){
  
//needed variables
  unordered_map<string, int> state;
  unordered_map<string, string> parent;
  string startState;

//user prompt 
  cout << "Enter the starting state (e.g. 0123456789)" << endl;
  cin >> startState;

//run bfs on map  
  int distance = bfs(state, startState, parent);

//output failed attempt or number of moves to solve  
  if(distance == -1)
    {
    cout << "Target state not reachable." << endl;
    }
  else cout << "Minimum number of moves to solve is -- " << distance << endl;
  
  return 0; 
}
