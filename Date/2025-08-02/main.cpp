//     #include <iostream>
//     #include <string>

//     using namespace std;

//     using ll = long long;

//     int main(){

// int L;
// string str;

// cin >> L >> str;

// const int r = 31;
// const int M = 1234567891;   

// ll hash = 0;
// ll pow_r = 1;

// for(int i = 0; i < L; ++i){

//     int val = str[i] - 'a'+ 1;
//     hash = (hash + val * pow_r) % M;
//     pow_r = (pow_r * r) % M;

// }

// cout << hash << endl;

// return 0;


//     }


#include <iostream>>
#include <string>
#include <vector>

using namespace std;

class stack {

    public :

    vector<int> data;

    private :

    
}