//
//  Save_Bot_princess.cpp
//  
//
//  Created by ashokraja on 04/03/1942 Saka.
//

#include "Save_Bot_princess.hpp"
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


void displayPathtoPrincess(int n, vector <string> grid)
{
    //your logic here
   int i1,i2,j1,j2;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
         if(grid[i][j]=='m')
         {
             i1=i;
             j1=j;
         }
           
          if(grid[i][j]=='p')
          {
               i2=i;
               j2=j;
          }
       }
   }
    if(i1>i2)
    {
        for(;i1>i2;i1--)
        {
            if(grid[i1][j1]!='p')
            {
            cout<<"UP\n";
            }
        }
    }
   else
   {
       if(i1<i2)
       {
         for(;i1<i2;i1++)
         {
            if(grid[i1][j1]!='p')
            {
             cout<<"DOWN\n";
             }
         }
       }
   }
                 if(j1>j2)
                     {
                           for(;j1>j2;j1--)
                           {
                                if(grid[i1][j1]!='p')
                                {
                               cout<<"LEFT\n";
                                }
                           }
                       }
                        else
                        {
                            if(j1<j2)
                            {
                              for(;j1<=j2;j1++)
                               {
                                 if(grid[i1][j1]!='p')
                                 {
                                   cout<<"RIGHT\n";
                                 }
                               }
                             }
                        }
                        
               
           
   
}
int main(void) {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
