#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> umap;
    umap["hello"] = 1;
    umap["hii"] = 2;
    umap["hy"] = 3;

    for(auto x : umap)
        cout << x.first << " " << x.second << endl;
    return 0;
}