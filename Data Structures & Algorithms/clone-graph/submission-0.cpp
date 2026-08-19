/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==nullptr) return nullptr;
        unordered_map<Node*,Node*>mp;
        mp[node]=new Node(node->val);
        queue<Node*>qe;
        qe.push(node);
        while(!qe.empty())
        {
            Node* curr=qe.front();
            qe.pop();
            for(Node* neighbour: curr->neighbors)
            {
               if(mp.find(neighbour)==mp.end())
               {
                 mp[neighbour]=new Node(neighbour->val);
                 qe.push(neighbour);
               }
               mp[curr]->neighbors.push_back(mp[neighbour]);
            }
        }
        return mp[node];
    }
};
