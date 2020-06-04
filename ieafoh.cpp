//
//  ieafoh.cpp
//  
//
//  Created by ashokraja on 04/03/1942 Saka.
//

#include "ieafoh.hpp"
#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here
    int i1,i2,j1,j2,i,j;
    i1=r;
    j1=c;
  
    
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
          if(grid[i][j]=='p')
          {
               i2=i;
               j2=j;
          }
       }
   }
    if(i1>i2)
    {
         if(grid[i1][j1]!='p')
            {
            cout<<"UP\n";
             i1--;
         goto lb;
            }
        }
    
   else
   {
       if(i1<i2)
       {
            if(grid[i1][j1]!='p')
            {
             cout<<"DOWN\n";
                i1++;
             goto lb;
                
             }
         }
       }
           
            if(i1==i2)
            {
                
                 if(j1>j2)
                     {
                       if(grid[i1][j1]!='p')
                        {
                           cout<<"LEFT\n";
                           j1--;
                        }
                      }
                        else
                        {
                            if(j1<j2)
                            {
                                 if(grid[i1][j1]!='p')
                                 {
                                   cout<<"RIGHT\n";
                                     j1++;
                                 }
                               }
                            }
            }
                        
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    lb:
    return 0;
}
