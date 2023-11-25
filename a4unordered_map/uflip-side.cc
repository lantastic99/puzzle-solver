// contains function implementations
#include "uflip-side.h"
#include <unordered_map>
#include <queue>
#include <iostream>

void mts(unordered_map<string, string>& parent, const string& v)
{
  if(parent.find(v) != parent.end())
 {
    {
      mts(parent,parent[v]);
    }
    cout << v << endl;
 }
}

  int bfs(unordered_map<string, int>& distance, const string& startState, unordered_map<string, string>& parent)
{
//create queue
  queue<string> m;

//create and initialize target state
  string targetState = "0123456789";

//push starting state into queue
//set distance to 0
  m.push(startState);
  distance[startState] = 0;

//start bfs algorithm (if empty then either solved or failed{should never fail})
  while (!m.empty())
   {
     string v = m.front();
     m.pop();
     int count = distance[v];
     
//base case (input is target state) and moves to solve call
     if ( v == targetState)
       {
	 cout << "moves to solve" << endl;
	 mts(parent,v);
	 return count;
       }

//begin of possible state generation 
     for (int i = 0; i < 3; i++)
       {
	 for (int j = 5; j < 8; j++)
	   {
	     string swappedKey = v;
	     swap(swappedKey[i], swappedKey[j]);
	     swap(swappedKey[i+1], swappedKey[j+1]);
	     swap(swappedKey[i+2], swappedKey[j+2]);
//end of possible state generation algorithm
	     
//check to see if swapped key is unique
	     if(distance.find(swappedKey)==distance.end())
	       {
	     //push unique key to queue
		 m.push(swappedKey);
		 
	     //update distance int of pushed key
		 distance[swappedKey] = count + 1;

	     //assign a parent to swapped key
		 parent[swappedKey] = v;
	       }
	     
//if not unique check if the distance is less than one in map
	     else if(count + 1 < distance[swappedKey])
	       {
		 //if less distance, update distance in map
		 distance[swappedKey] = count + 1;
	       }
	   }
       }
   }
//if failed return -1 "target state not found"
  return -1;  
}
