
/*IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. 
The subcommittee members are asked to go to food connection and get P(P<=1000) pratas packed for 
the function. The stall has L cooks(L<=50) and each cook has a rank R(1<=R<=8).
A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 
1 more prata in 3R minutes and so on(he can only cook a complete prata) ( For example if a cook
is ranked 2.. he will cook one prata in 2 minutes one more prata in the next 4 mins an one more
in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook
 only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants to know the
 minimum time to get the order done. Please write a program to help him out.

Input:
The first line tells the number of test cases. Each test case consist of 2 lines. In the first 
line of the test case we have P the number of prata ordered. In the next line the first integer 
denotes the number of cooks L and L integers follow in the same line each denoting the rank of a cook.

Output:
Print an integer which tells the number of minutes needed to get the order done. */

#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int ll;
using namespace std;

bool isValid(vector<ll > v, ll p,int time){
    ll sum = 0;
    for (ll i = 0; i < v.size(); i++){
      // this loop will give no. of paratha made in the specified time
        int t = time;
        int count = 0,k=1;
        while (t>0){
            t = t - k*v[i];
            if (t >= 0){
                count++;
                k++;
            }
        }
        sum += count;
        //cout << count << endl;
    }
    //cout << "parathas made " << sum << endl;
    if (sum < p)
        return false;
    return true;

}

ll check_ans(vector<ll> v, ll p){
    ll s = 0, e = (v[0] * p*(p + 1)) / 2;// we can consider the maximum time taking that all th parathas are cooked by the first cook
    ll mid = (s + e) / 2;
    ll  ans;
    while (s <= e){
        //cout << s << " " << e << " " << mid << endl;
        if (isValid(v,p,mid)){
            //cout << "valid"<<endl<<endl;
            ans = mid;
            e = mid - 1;
        }
        else{
        //    cout << "not valid" << endl;
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main(){
    ll p, size;
    cin >> p >> size;
    vector<ll> v;
    while (size--){
        int d;
        cin >> d;
        v.push_back(d);
    }
    sort(v.begin(), v.end());
    ll ans = check_ans(v, p);
    cout << ans << endl;

    return 0;
}