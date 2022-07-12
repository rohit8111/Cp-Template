    #include"bits/stdc++.h"
    #include<vector>
    using namespace std;
    typedef long long ll;
    typedef long long int lli;
    #define debug(x,y) cout<<(#x)<<" " <<(#y)<<" is " << (x) <<" "<< (y) << endl
    #define watch(x) cout<<(#x)<<" is " << (x) << endl
    #define fast ios_base::sync_with_stdio(false)
    #define fie(i,a,b) for(i=a;i<b;i++)
    #define FOR(i,b) for(i=0;i<b;i++)

    #define MOD 1000000007
    #define mod 998244353
    #define PB push_back
    #define EB emplace_back
    #define MP make_pair
    #define FI first
    #define SE second
    // int i;
    // int n,m;
    // vector<vector<char>>arr; 
    // ........................[GCD-Start].......................................................
    int gcd_(int m,int n){
        int r = m % n;
        while (r != 0)
        {
            m = n;
            n = r;
            r = m % n;
        }
        return n;
    }
    // ........................[GCD-End].......................................................

    int get_mid(int x,int y){
        return x+(y-x)/2;
    }

    // squ_cube.erase(unique(squ_cube.begin(),squ_cube.end()),squ_cube.end());
    string convertToBinary(lli n){
        string ans="";
        while(n!=0){
            if(n%2==1) ans="1"+ans;
            else ans="0"+ans;
            n/=2;
        }
        return ans;
    }
    lli convertBackToNo(string s){
        int power=1;
        lli ans=0;
        for(int i=s.length()-1;i>=0;i--){
            ans+=(s[i]-'0')*power;
            power*=2;
        }
        return ans;
    }
    bool isVowel(char s){
        if((s=='a' ||s=='e' ||s=='i' ||s=='o' ||s=='u'))
            return true;
        return false;
    }
    bool isCons(char s){
        if((s=='a' ||s=='e' ||s=='i' ||s=='o' ||s=='u'))
            return false;
        return true;
    }
    ll max(ll a,ll b){
        return a>=b ?a:b;
    }
    ll min(ll a,ll b){
        return a>=b ?b:a;
    }
    int n,q;
    struct Tree{
        int val;
        int index;
    };
    const int max_=200001;


    // class node{
    //     public:
    //     int val;
    //     node*left,*right;
    //     node(int val){
    //         left=right=NULL;
    //         val=val;
    //     }
        
    // };
    // vector<int>tree;
    // int build(node*root,int val){
    //     if(root==NULL)
    //         return 0;
        
        
    // }
   vector<int>adj[200005];
   void dfs(int src,vector<int>&ans){
       int sub=0;
       for(auto child:adj[src]){
           dfs(child,ans);
           sub+=(1+ans[child]);
       }
       ans[src]=sub;
   }
//    #define V 5
//    int minKeys(int keys[],bool setMST[]){
//        int min
//        for(int i=0;i<V;i++){
//            if(setMST[i]==false and keys[i])
//        }
//    }
   int dfs(int u,vector<bool>&vis,vector<int>adj[]){
       if(!vis[u]){
           vis[u]=true;
           for(auto i:adj[u]){
               if(!vis[i])
                 return 1+dfs(i,vis,adj);
           }
       } 
       vis[u]=false;
       return 0;

   }
   
    int util(string&s,int i,int j,vector<vector<int>>&dp){
     int a,b;
     int a;
     cin>>a;
     vector<int>alice(a);
     for(int i=0;i<a;i++)
        cin>>alice[i];
    int b;
    vector<int>bob(b);
    for(int i=0;i<b;i++)
        cin>>bob[i];
    sort(alice.begin(),alice.end());
    sort(bob.begin(),bob.end());
    int temp_a=a,temp_b=b;
    bool flag=false;
    while(a>=0 and b>=0){
        if(alice[a-1]>bob[b-1]){
            cout<<"Alice"<<"\n";
            flag=true;
            break;
            }
    }
    if(!flag){
        cout<<"Bob"<<"\n";
    }
    a=temp_a,b=temp_b;
    flag=false;
   while(a>=0 and b>=0){
        if(alice[a-1]<bob[b-1]){
            cout<<"Bob"<<"\n";
            flag=true;
            break;
            }
    }
    if(!flag){
        cout<<"Alice"<<"\n";
    }
    };
   
    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout.precision(20);      
        int t;
        cin>>t;
        while(t--)
            {
                util();
            
            }
            
    }