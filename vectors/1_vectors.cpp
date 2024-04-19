#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    cout << "Size: " << v.size() << endl;;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i< n; i++){
        int x;
        cin >> x;
        // printVector(v);
        v.push_back(x);
    }
    vector<int> y(8);
    vector<int> z(8,1);
    printVector(v);
    printVector(y);

    printVector(z);
    return 0;
}