#include <bits/stdc++.h>
using namespace std;

int countMinSwaps(vector<int> arr){
  int n = arr.size();
  vector<pair<int,int>> arrInd;

  for(int i=0; i<n; i++){
    arrInd.push_back({arr[i], i});
  }

  sort(arrInd.begin(), arrInd.end());

  unordered_map<int, bool> visited;
  for(auto e : arr){
    visited[e] = 0;
  }

  int i = 0;
  int noOfSwaps = 0;
  while(i<n){
    
    int currentInd = i;
    int noOfElements = 0;

    bool insideWhileLoop = 0;
    
    while(!visited[currentInd]){
      noOfElements++;
      visited[currentInd] = 1;
      
      int toGoIndex = arrInd[currentInd].second;
      currentInd = toGoIndex;
      
      insideWhileLoop = 1;
      
      cout << arrInd[currentInd].first << " ";
    }

    if(insideWhileLoop){
      noOfSwaps += noOfElements-1;
      cout << "No Of Elements " << noOfElements << "\n";
    }
    
    i++;
  }
  
  return noOfSwaps;
}

int main() {
  cout << "Hello World!\n";
  
  vector<int> arr{10,  11, 5, 4, 3, 2, 1};
  cout<<countMinSwaps(arr)<<endl;
  
  return 0;
}

/*
int countMinSwaps(vector<int> arr){
  int n = arr.size();
  vector<pair<int,int>> arrInd;

  for(int i=0; i<n; i++){
    arrInd.push_back({arr[i], i});
  }

  sort(arrInd.begin(), arrInd.end());

  unordered_map<int, bool> visited;
  for(auto e : arr){
    visited[e] = 0;
  }

  int i = 0;
  int noOfSwaps = 0;
  while(i<n){
    
    int currentInd = i;
    int noOfElements = 0;

    bool insideWhileLoop = 0;
    
    while(!visited[currentInd]){
      noOfElements++;
      visited[currentInd] = 1;
      int toGoIndex = arrInd[currentInd].second;
      currentInd = toGoIndex;
      insideWhileLoop = 1;
      cout << arr[]
    }

    if(insideWhileLoop){
      noOfSwaps += noOfElements-1;
      cout << "No Of Elements " << noOfElements << "\n";
    }
     
    
    i++;
  }
  
  return noOfSwaps;
}

*/