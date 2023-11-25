// includes function prototype
#include <unordered_map>
#include <iostream>

using namespace std;

int bfs(unordered_map<string, int>& distance, const string& startState, unordered_map<string, string>& parent);

void mts(unordered_map<string, string>& parent, const string& v);
  
