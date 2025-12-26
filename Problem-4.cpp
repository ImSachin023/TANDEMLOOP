/*
Problem-4: Get the total count of number listed in the dictionary
 which is multiple of [1,2,3,4,5,6,7,8,9]
  (examples)
  input: [1,2,8,9,12,46,76,82,15,20,30]
  Output: 
    {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> nums = {1,2,8,9,12,46,76,82,15,20,30};
    map<int, int> result;

    for (int i = 1; i <= 9; i++) {
        result[i] = 0;
        for (int num : nums) {
            if (num % i == 0)
                result[i]++;
        }
    }

    cout << "{ ";
    for (auto it : result) {
        cout << it.first << ": " << it.second << " ";
    }
    cout << "}";
    return 0;
}