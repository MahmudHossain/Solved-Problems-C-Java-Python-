#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    int num=1;
    cin >> s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]>=65 && s[i]<=90)
            num++;
    }
    cout<<num<<endl;
    return 0;
}
