#include<iostream>
#include<stdlib.h>
#include <climits>
#define n 8
#define INF INT_MAX

 using namespace std;

 void printNodes(int dist[n]){
   int stages=5;
   int path[stages]={0};
   path[1]=1;
   for (int i=2;i<stages;i++){
     path[i]=dist[path[i-1]];
     cout<<path[i]<<"\t";
   }
 }

 void ShortestDistance(int graph[n][n]){
   int cost[n]={0};
   int min=INF;
   int dist[n];
   dist[n-1]=0;



   for (int i=n-2;i>=0;i--){
      min=INF;
    for (int j=i;j<n;j++){
      if (graph[i][j]!=0 && graph[i][j]+cost[j]<min ){

        min=graph[i][j]+cost[j];
        cout<<min<<endl;
        dist[i]=j;     //storing node
      }
    }
    cost[i]=min;
   }

   cout<<"Cost is :"<<cost[0];
   printNodes(dist);
 }




 int main(){
   int graph[n][n]={   {0,1,2,5,0,0,0,0},
                       {0,0,0,0,4,11,0,0},
                       {0,0,0,0,9,5,16,0},
                       {0,0,0,0,0,0,2,0},
                       {0,0,0,0,0,0,0,18},
                       {0,0,0,0,0,0,0,13},
                       {0,0,0,0,0,0,0,2}};

       ShortestDistance(graph);
       return 0;
 }
