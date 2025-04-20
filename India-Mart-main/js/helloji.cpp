#include <iostream>
using namespace std;

void toMoveNegativeNumberInLeftSide(int nums[], int n){
int l = 0;
int h = n-1;
while(l<h){
    if(nums[l]<0){
l++;
    }
    else if(nums[h]>0){
        h--;
    }
    else{
        swap(nums[l], nums[h]);


    }
    
}
}

int main(){
int nums[] = {1,2,-3,-4,5,7,-9};
int n = sizeof(nums)/ sizeof(nums[0]);

//  toMoveNegativeNumberInLeftSide(nums, n);

cout<<"array to move negative number in left side ";

for(int i=0; i<n; i++){
    cout<< nums[i]<< " ";

}



    return 0;
}