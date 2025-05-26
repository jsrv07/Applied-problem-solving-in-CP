#include <bits/stdc++.h>

using namespace std;

int result=0;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int covered[7][7]={};
void dfs(int x,int y, int i,int cmnd){

    if(i==48){
        if(x==0 && y==6) result++;
        return;
    }

    if(cmnd<4){
        x+=dx[cmnd];
        y+=dy[cmnd];
    }

    if(x<0 || x>6 || y<0 || y>6) return;

    

}
int main(){


}