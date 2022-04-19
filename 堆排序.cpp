#include <iostream>
using namespace std;
#include <vector>

void swap(int& a , int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

void heap_sort(vector<int>& num , int size)
{
    if(size == 1){
        return;
    }
    int lastid = size / 2 - 1;

    for(int i = lastid ; i >= 0 ; --i){
        if(2 * i + 2 <= size - 1){
            if(num[i] < num[2 * i + 2]){
                swap(num[i] , num[2 * i + 2]);
            }
        }
        if(num[i] < num[2 * i + 1]){
            swap(num[i] , num[2 * i + 1]);
        }
    }
    swap(num[0] , num[size - 1]);

    heap_sort(num , size - 1);
}

int main(){
    vector<int> a = {-1 , 23 , 2 , 17 , 5 , 4};
    int size = a.size();
    heap_sort(a , size);
    for(auto i : a){
        cout << i << endl;
    }
}
