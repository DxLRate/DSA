#include<iostream>
#include<priority_queue>
using namespace std;

// ---------Median of running stream ------------
int runningMedian(int arr[], int n){
    priority_queue<int, vector<int>> pqmax;
    priority_queue<int, vecor<int>> pqmin;
    for(int i=0; i<n; i++){
        if(pqmax.size() == pqmin.size()){
            if(pq.size()==0){
                pqmax.push(arr[i]);
            }
            if(arr[i] <= pqmax.top()){
                pqmax.push(arr[i]);
            }else{
                pqmin.push(arr[i]);
            }
        }else if(pqmax.size() > pqmin.size()){
            if(arr[i] > pqmax.top()){
                pqmin.push(arr[i]);
            }else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmax.push(arr[i]);
                pqmin.push(temp);
            }
        }else if(pqmin.size() > pqmax.size()){
            if(arr[i] <= pqmax.top()){
                pqmax.push(arr[i]);
            }else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmin.push(arr[i]);
                pqmax.push(temp);
            }
        }    
    }

    int median;
    if(pqmax.size() == pqmin.size()){
        return (pqmax.top() + pqmin.top())/2;
    }else if(pqmax.size() > pqmin.size()){
        return pqmax.top();
    }else{
        return pqmin.top();
    }
    return median;
}


// --------------------------------merge k sorted arrays ---------

mergeAllSorted(vector<vector<int>> vii, ){
    
}

int main(){

}