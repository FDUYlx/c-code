#include <iostream>
using namespace std;
#include <vector>

void merge(vector<int>& num , int first , int mid , int last){
    int lnum = mid - first + 1;         //左右两个数组的元素个数
    int rnum = last - mid;
    int* L = new int[lnum];
    int* R = new int[rnum];

    for(int i = 0 ; i < lnum ; ++i){    //初始化两个辅助数组
        L[i] = num[first + i];
    }
    for(int i = 0 ; i < rnum ; ++i){
        R[i] = num[mid + i + 1];
    }

    int i = 0;      //三个哨兵
    int j = 0;
    int k = first;

    while(i < lnum && j < rnum){
        if(L[i] < R[j]){
            num[k] = L[i];
            ++i , ++k;
        }
        else{
            num[k] = R[j];
            ++j , ++k;
        }
    }
    while(i < lnum){
        num[k] = L[i];
        ++i , ++k;
    }
    while(j < rnum){
        num[k] = R[j];
        ++j , ++k;
    }
    delete [] L;
    delete [] R;
}

void merge_sort(vector<int>& num , int first , int last)
{
    if(first >= last){
        return;
    }

    int mid = (first + last) / 2;

    merge_sort(num , first , mid);
    merge_sort(num , mid + 1 , last);
    merge(num , first , mid , last);
}

int main(){
    vector<int> a = {1 , 3 , 2 , 7 , 5 , 4};
    merge_sort(a , 0 ,5);
    for(auto i : a){
        cout << i << endl;
    }
}
