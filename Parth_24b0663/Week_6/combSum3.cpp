class Solution {
public:
    vector<vector<int> > ans;
    vector<int> temp={};
    void print(vector<int> & a){
        for(int &b:a) cout<<b<<" ";
        cout<<endl;
    }
    int suma(vector<int> & a){
        int sum=0;
        for(int &b:a)
        sum=sum+b;
        return sum;
    }
    void fn(vector<int> &a,int& k, int & n, int i){
        if(temp.size()==k){
            if(suma(temp)==n) {ans.push_back(temp);}
        }
        else if(temp.size()>k || suma(temp)>n) return;
        if(i > 8) return;
        for(int j=i;j<a.size();j++){
            temp.push_back(a[j]);
            // print(temp);
            fn(a,k,n,j+1);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> a={1,2,3,4,5,6,7,8,9};
        fn(a,k,n,0);
        return ans;
    }
};