#include<bits/stdc++.h>
using namespace std;
int result=0;
bool visited[7][7]={0};
string path;
void backtrack(int x,int y,int step){
    int remaining_steps = 48 - step;
    int distance = abs(x - 6) + abs(y - 0);
    if (distance > remaining_steps) return;
    
    if(x==6 && y==0){
        if(step==48){
            result++;
            return;
        }
    }

    visited[x][y]=true;
    char c=path[step];

    if(c=='?' || c=='R'){
        if(y+1<7 && !visited[x][y+1]){
            backtrack(x,y+1,step+1);
        }
    }
    if(c=='?' || c=='L'){
        if(y-1>=0 && !visited[x][y-1]){
            backtrack(x,y-1,step+1);
        }
    }
    if(c=='?' || c=='U'){
        if(x-1>=0 && !visited[x-1][y]){
            backtrack(x-1,y,step+1);
        }
    }
    if(c=='?' || c=='D'){
        if(x+1<7 && !visited[x+1][y]){
            backtrack(x+1,y,step+1);
        }
    }
    visited[x][y]=false;
}
int main(){
    cin>>path;
    backtrack(0,0,0);
    cout<<result;
}