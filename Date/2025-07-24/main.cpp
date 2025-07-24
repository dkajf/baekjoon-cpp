// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){

//     vector<int> nums(9);

//     for(int i = 0; i < 9; ++i){
//         cin >> nums[i];
//     }

//     int maxVal = nums[0];
//     int maxIndex = 0;

// for (int i = 0; i < 8; ++i){
//     if (nums[i + 1] > maxVal){
//         maxVal = nums[i + 1];
//         maxIndex = i + 1;
//     }
// }

// cout << maxVal << '\n';
// cout << (maxIndex + 1) << '\n';
//     return 0;

// }

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N;

    cin >> N;

    for(int i = 0; i < N; ++i){
        int R;
        string S;
        cin >> R >> S;
   
        for (char c : S){
        for( int j = 0; j < R; ++j){
            cout << c;

        }
    }

    cout << '\n';

    }

    return 0;
}