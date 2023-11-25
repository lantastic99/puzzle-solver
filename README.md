# puzzle-solver
Puzzle solver for lesser known flip-side puzzle. the purpose is to show the ability of breadth first search and its ability to find the shortest path to a target node from any random starting state. this is a good example of its ability to also store the shortest path traveled to reach the target state. this program uses the map and queue datastructure to implement bfs and can be easily changed into dfs by changing the datastructure from a queue to a stack.

How to function
make file is set to compile with gnu g++.
-to run, open directory in terminal. 
-input into terminal make
    -code will compile neccesary files.
-run excecutable names flip-side
    -input 9 digit string in any order and wait for the smallest number of moves to solve
    (TARGET STATE IS 0123456789) 
    -program will output the states that it took to reach the solved state in the shortest 
    number of moves.
-type make clean into the terminal to remove the files created from compilation and running of executable.
