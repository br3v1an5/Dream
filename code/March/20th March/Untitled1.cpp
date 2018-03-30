#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int first,second;
	friend bool operator<(node a,node b)
	{
		if(a.first==b.first)
			return a.second==b.second;
		
		return a.first>b.first;
	}
};
int main()
 {
 	priority_queue<node> que;
 	node a;
 	a.first=2;
 	a.second=2;
 	que.push(a);
 	a.first=2;
 	a.second=1;
 	que.push(a);
 	a.first=2;
 	a.second=2;
 	que.push(a);
 	while(!que.empty())
 	{
 		node q=que.top();
 		cout<<q.first<<" "<<q.second<<endl;
 		que.pop();
	 }
 }
