#include <iostream>
#include <map>
#include <vector>
#include <set>

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        map<int, vector<int> > sub;
        set<int> tot;
        for(int i=0;i<prerequisites.size();i++)
        {
        	int k=prerequisites[i].first;
        	int v=prerequisites[i].second;
        	tot.insert(k);
        	tot.insert(v);
        	sub[k].push_back(v);
        }
        vector<bool> recS;
        vector<bool> visited;
        for(int i=0;i<tot.size();i++)					//may be here
        {
        	recS[i]=false;
        	visited[i]=false;
        }
        for(int i=0;i<tot.size();i++)
        {
        if(isCyclic(sub,recS,visited,i))
        	return true;	
        }
        
        return false;
    }
	
    bool isCyclic(map<int,vector<int> >sub,vector<bool>& recS, vector<bool>& visited,int k)
    {

    	if(!visited[k])
    	{
    		recS[k]=true;
    		visited[k]=true;
    		for(int i=0;i<sub[k].size();i++)
    		{
    			if(recS[sub[k][i]])
    				return true;
    			else if(isCyclic(map,recS,visited,sub[k][i]))
    			{

    			}
    		}
    	}
    	recS[k]=false;
    	return false;
    }

};