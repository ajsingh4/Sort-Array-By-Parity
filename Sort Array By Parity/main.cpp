//
//  main.cpp
//  Sort Array By Parity
//
//  Created by Aj Gill on 4/12/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> C;
        for(int i=0; i<A.size(); i++){
            if(A[i] % 2 == 0){
                C.push_back(A[i]);
            }
        }
        for(int j=0; j<A.size(); j++){
            if(A[j] % 2 != 0){
                C.push_back(A[j]);
            }
        }
        return C;
    }
};

int main() {
    vector<int> input = {3,1,2,4};
    vector<int> answer = Solution().sortArrayByParity(input);
    for(int m=0; m<answer.size(); m++){
        cout << answer[m] << " ";
    }
}
