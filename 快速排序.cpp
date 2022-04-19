#include <iostream>
using namespace std;
#include <vector>

void Quick_sort(vector<int>& num , int left , int right)
{
    if(left < right){
        int base = num[left];
        int i = left;
        int j = right;

        while(i < j){
            while(j > i && num[j] >= base){
                --j;
            }
            while(i < j && num[i] <= base){
                ++i;
            }
            if(i < j){
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
        num[left] = num[j];
        num[j] = base;

        Quick_sort(num , left , j - 1);
        Quick_sort(num , j + 1 , right);
    }
    else{
        return;
    }
}

int main(){
    vector<int> a = {1 , 3 , 2 , 7 , 5 , 4};
    Quick_sort(a , 0 , 5);
    for(auto i : a){
        cout << i << endl;
    }
}
