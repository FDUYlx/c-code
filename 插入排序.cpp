#include <iostream>
using namespace std;
#include <vector>

void insert_sort(vector<int>& num)
{
    int size = num.size();
    if(size <= 1) return;
    
    for(int i = 1 ; i < size ; ++i){
        for(int j = i ; j > 0 ; --j){
            if(num[j - 1] > num[j]){
                int tmp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = tmp;
            }
        }
    }
}

int main(){
    vector<int> a = {1 , 3 , 2 , 7 , 5 , 4};
    insert_sort(a);
    for(auto i : a){
        cout << i << endl;
    }
}
