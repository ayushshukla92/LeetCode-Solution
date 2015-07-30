#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <utility>

using namespace std;

int isReplace(string s, string t)
{
	if(s.length()!=t.length())
		return -1;
	int c=0,ind;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=t[i])
		{
			c++;
			ind = i;
		}
	}
	if(c==1)
		return ind;
	else
		return -1;

}

int ladderLength(string start, string end, set<string>& wordDict) {
	if(start.length()!=end.length())
		return -1;
	wordDict.insert(end);
	queue<pair<string,int> > dictQ;
	pair<string,int> p(start,0);
	dictQ.push(p);
	set<string> visited;
	set<string>::iterator it;
	while(!dictQ.empty())
	{
		pair<string,int> cn = dictQ.front();
		cout<<cn.first<<" "<<cn.second<<endl;
		dictQ.pop();
		if(cn.first==end)
			return cn.second;
		for(it=wordDict.begin();it!=wordDict.end();it++)
		{
			int ind = isReplace(cn.first,*it);
			if(visited.find(*it)==visited.end() && ind!=-1)
			{
				pair<string,int> t(*it,cn.second+1);
				dictQ.push(t);
				visited.insert(*it);
			}
		}
	}	
	return -1;
}

int main()
{
	set<string> dict;
	dict.insert("hot");
	dict.insert("lot");
	dict.insert("dog");
	dict.insert("dot");
	dict.insert("log");
	if(ladderLength("hit","cog",dict))
		cout<<"yes\n";

	return 0;
}