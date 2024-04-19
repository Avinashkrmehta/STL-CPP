#include<bits/stdc++.h>
using namespace std;

int main(){
  pair<int,string> p;
  // p = make_pair(2,"abc");
  p = {2,"abcde"};


  pair<int, string> p1= p;
  p1.first = 3;
  cout << p.first << " " << p.second << endl;

  cout << p1.first << " " << p1.second << endl;
  
  pair<int,int> pair_array[3];
  pair_array[0] = {1,2};
  pair_array[1] = {3,4};
  pair_array[2] = {5,6};
  pair_array[3] = {7,8};

  for(int i=0; i<3; i++){
    cout << pair_array[i].first << " " << pair_array[i].second << endl; 
  }
  return 0;
}