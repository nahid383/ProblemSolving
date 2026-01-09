/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

struct Element{
    ll num, x;
};

bool cmp(const Element &e1, const Element &e2){
    return e1.num<e2.num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vl a(n);
        vl b(m);
        vl c(m);
        
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        queue<ll> temp;
        // sorted(a);
        scan(a,n);
        foriton(n){
            pq.push(a[i]);
        }
        // ll max_a = *max_element(a.begin(), a.end());
        scan(b, m);
        scan(c, m);
        vector<Element> p1, p2;
        for(int i=0; i<m; i++){
            if(c[i]==0){
                p1.push_back({b[i], 0});
            } else{
                p2.push_back({b[i], c[i]});
            }
        }

        sort(p1.begin(), p1.end(), cmp);
        sort(p2.begin(), p2.end(), cmp);

        ll res = 0;
        ll i = 0;
        // ll max_c = *max_element(c.begin(), c.end());

        // ll x = max(max_a, max_c);

        // vector<pair<ll,ll>> pr;

        // foriton(m){
        //     ll x = b[i], y = c[i];
        //     pr.push_back({x,y});
        // }
        // sorted(pr);


        // // // sorted(b);
        // ll count = 0;

        // foriton(m){
        //     if(b[i]<=x){
        //         count++;
        //     }
        // }
        while(i<(ll)p2.size() && !pq.empty()){
            if(pq.top()<p2[i].num){
                temp.push(pq.top());
                pq.pop();
            } else{
                res++;
                ll num = pq.top();
                pq.pop();
                if(p2[i].x>num){
                    pq.push(max(num, p2[i].x));
                }
                i++;
            }
        }

        while(!temp.empty()){
            pq.push(temp.front());
            temp.pop();
        }

        i = 0;
        while(i<(ll)p1.size() && !pq.empty()){
            if (pq.top() >= p1[i].num){
                res++;
                i++;
            }
            pq.pop();
        }

        cout<<res<<"\n";
        while(!pq.empty()) 
        pq.pop();

        // // foriton(n){
        // //     while(a[i]!=0){
        // //         bool changed = false;
        // //         for(ll j=0; j<2*m; j++){
        // //             if(b[j]<=a[i] && b[j]!=0){
        // //                 a[i]=a[i]-b[j];
        // //                 b[j]=0;
        // //                 changed=true;
        // //                 count++;
        // //             }
        // //         }
        // //         if(!changed){
        // //             break;
        // //         }
        // //     }
        // // }
        // sorted(a);

        // sort(pr.begin(), pr.end(), [](pair<ll,ll> a, pair<ll,ll> b){
        // return a.second>b.second;
        // });

        // foriton(n){
        //     for(auto &p:pr){
        //         bool changed = false;
        //         if(a[i]>=p.first && p.first!=-1){
        //             count++;
        //             p.first=-1;
        //             if(p.second>0){
        //                 a.push_back(p.second);
        //                 n++;
        //             }
        //             break;
        //         }
        //         // if(changed){
        //         //     i--;
        //         // }
        //     }

        //     sorted(a);

        // }
        

        // countt;

    }
}