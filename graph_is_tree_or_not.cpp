//check if given graph is tree or not
#include<iostream>
#define NODE 5
using namespace std;
int graph[NODE][NODE] = {
   {0, 1, 1, 1, 0},
   {1, 0, 0, 0, 0},
   {1, 0, 0, 0, 0},
   {1, 0, 0, 0, 1},
   {0, 0, 0, 1, 0}
};
bool isCycle(int u, bool visited[], int parent) {
   visited[u] = true;    
   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {
         if(!visited[v]) {     
            if(isCycle(v, visited, u)) {
               return true;
            }
         } else if(v != parent) {    
            return true;  
         }
      }
   }
   return false;
}

bool isTree() {
   bool *vis = new bool[NODE];

   for(int i = 0; i<NODE; i++)
      vis[i] = false;    
         
   if(isCycle(0, vis, -1))    
      return false;
         
   for(int i = 0; i<NODE; i++) {
      if(!vis[i])    
         return false;
   }
   return true;
}

int main() {
   if(isTree())
      cout << "The Graph is a Tree.";
   else
      cout << "The Graph is not a Tree.";
}
