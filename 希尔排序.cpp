#include <iostream>
using namespace std;
#include <vector>

void shell_sort(vector<int>& num)
{
    int size = num.size();
    if(size <= 1) return;

    int h = 1;
    while(h < size / 3)
    {
        h = h * 3 + 1;
    }
    
    while(h >= 1){
        for(int i = h ; i < size ; ++i){
            for(int j = i ; j >= h ; j -= h){
                if(num[j - h] > num[j]){
                    int tmp = num[j - h];
                    num[j - h] = num[j];
                    num[j] = tmp;
                }
            }
        }
        h = h / 3;
    }
}

int main(){
    vector<int> a = {1 , 3 , 2 , 7 , 5 , 4};
    shell_sort(a);
    for(auto i : a){
        cout << i << endl;
    }
}
