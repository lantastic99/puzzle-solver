// includes function prototype
#include <map>
#include <iostream>

using namespace std;

int bfs(map<string, int>& distance, const string& startState, map<string, string>& parent);

void mts(map<string, string>& parent, const string& v);
  
