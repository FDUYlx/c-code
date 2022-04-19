#include <iostream>
using namespace std;
#include <vector>

void bubble_sort(vector<int>& num) 
{
    int size = num.size();
    if(size <= 0) return;

    bool flag = false;

    for(int i = 0 ; i < size - 1 ; ++i){
        flag = false;
        for(int j = 0 ; j < size - i - 1 ; ++j){
            if(num[j] > num[j + 1]){
                int tmp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = tmp;
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
}

int main(){
    vector<int> a = {1 , 3 , 2 , 7 , 5 , 4};
    bubble_sort(a);
    for(auto i : a){
        cout << i << endl;
    }
}