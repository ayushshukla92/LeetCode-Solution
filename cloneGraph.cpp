#include <iostream>
#include <vector> 
#include <set>
#include <queue>
  struct UndirectedGraphNode {
      int label;
      vector<UndirectedGraphNode *> neighbors;
      UndirectedGraphNode(int x) : label(x) {};
  };
 
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        queue<UndirectedGraphNode *> mq1;
        queue<UndirectedGraphNode *> mq2;
        set<int> ms;
        set<UndirectedGraphNode *> cloneSet;
        UndirectedGraphNode * n = new UndirectedGraphNode();
        n->label = node->label;
        cloneSet.insert(n);
        ms.insert(n->label);    
        mq1.add(node);
        mq2.add(n);
        while(!mq1.empty())
        {
            UndirectedGraphNode *t1 = mq1.front();
            UndirectedGraphNode *t2 = mq2.front();
            mq1.pop();
            mq2.pop();
            for(int i=0; i<t1->neighbors.size();i++)
            {
                UndirectedGraphNode *cn = t1->neighbors[i];
                if(ms.find(cn->label)==ms.end())
                {
                    UndirectedGraphNode * n2 = new UndirectedGraphNode();
                    n2->label = cn->label;
                    cloneSet.insert(n2);
                    t2->neighbors.push_back(n2);
                    mq1.push(cn);
                    mq2.push(n2);
                }
                else
                {
                    set<UndirectedGraphNode*>::iterator it;
                    for(it=cloneSet.begin();it!=cloneSet.end();it++)
                    {
                        if(it->label==cn->label)
                            t2->neighbors.push_back(*it);        
                    }
                    
                }
            }
        }
        return n;   
        
    }
};