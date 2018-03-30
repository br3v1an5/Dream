#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
const int maxn=1005;
char maze[maxn][maxn];
bool visited[maxn][maxn];
int dx[]= {-1,0,1,0};
int dy[]= {0,1,0,-1};
struct Point
{
    Point() {}
    int x,y,turns,dir;
    friend bool operator<(Point a,Point b)
    {
        if(a.turns!=b.turns)
            return a.turns<b.turns;
        else
            return a.dir!=b.dir;
    }
};
int n,m;
Point s, t;
bool IsValid(Point a)
{
    if(a.x>=0&&a.y>=0&&a.x<n&&a.y<m&&maze[a.x][a.y]!='*')
        return true;
    return false;
}
bool bfs()
{
    memset(visited,false,sizeof(visited));
    priority_queue<Point> que;
    que.push(s);
    visited[s.x][s.y]=true;
    while(!que.empty())
    {
        Point q=que.top();
        que.pop();
        if(q.x==t.x&&q.y==t.y)
            return true;
        for(int i=0; i<4; i++)
        {
            Point next;
            next.x=q.x+dx[i];
            next.y=q.y+dy[i];
            if(IsValid(next))
            {
                next.turns=(q.dir==i)?q.turns:(q.turns+1);
                next.dir=i;
                if(!visited[next.x][next.y]&&next.turns<=2)
                {
                    que.push(next);
                    visited[next.x][next.y]=true;
                    //cout<<next.x<<" "<<next.y<<" "<<next.turns<<" "<<next.dir<<endl;
                }
            }
        }
    }
    return false;
}
int main()
{
    while(cin>>n>>m)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>maze[i][j];
                if(maze[i][j]=='S')
                    s.x=i,s.y=j,s.turns=-1,s.dir=-1;
                else if(maze[i][j]=='T')
                    t.x=i,t.y=j;
            }
        }

        if(bfs())
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<endl;
    }
}

