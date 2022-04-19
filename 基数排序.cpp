#include <iostream>
using namespace std;
#include <vector>
#include <math.h>

int digit(int num)  //求一个数是几位数
{
    int dig = 1;
    while(num / 10)
    {
        num = num / 10;
        ++dig;
    }
    return dig;
}

int maxdigit(vector<int> num)   //求数组中最大数是几位数
{
    int maxd = 0;
    for(auto i : num){
        maxd = max(maxd , digit(i));
    }
    return maxd;
}

void Radix_sort(vector<int>& num)
{
    int size = num.size();
    if(size <= 1) return;
    
    int maxd = maxdigit(num);
    for(int i = 1 ; i <= maxd ; ++i)
    {
        vector<vector<int>>vec(10);
        for(auto x : num)
        {
            int y = x / (int)(pow(10 , i - 1)) % 10;
            vec[y].push_back(x);
        }
        num.clear();
        for(int i = 0 ; i < 10 ; ++i){
            for(int j = 0 ; j < vec[i].size() ; ++j){
                num.push_back(vec[i][j]);
            }
        }
    }
}  

int main()
{
    vector<int> a = {1 , 3 , 22 , 13 , 135 , 4};
    Radix_sort(a);
    for(auto i : a){
        cout << i << endl;
    }
}
