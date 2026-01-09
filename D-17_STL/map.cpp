#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
//   map<string,int>m;
//   m["book"]=100;
//   m["pen"]=20;
//   m["notebook"]=39;

// multimap<string,int>m;

//  m.emplace("tv",100);
//  m.emplace("tv",100);
//  m.emplace("tv",100);

unordered_map<string,int>m;
 m.emplace("tv",100);
 m.emplace("tv",100);
 m.emplace("tv",100);

  for(auto p:m){
    cout<<p.first<<" "<< p.second<<endl;
  }
}