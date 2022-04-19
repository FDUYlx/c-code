#include <iostream>
using namespace std;
#include <vector>

void selection_sort(vector<int>& num)
{
    int size = num.size();
    if(size <= 1) return;

    for(int i = 0 ; i < size - 1 ; ++i){
        int minindex = i;
        for(int j = i + 1 ; j < size ; ++j){
            if(num[j] < num[minindex]){
                minindex = j;
            }
        }
        int tmp = num[i];
        num[i] = num[minindex];
        num[minindex] = tmp;
    }
}

int main(){
    vector<int> a = {1 , 3 , 2 , 7 , 5 , 4};
    selection_sort(a);
    for(auto i : a){
        cout << i << endl;
    }
}
