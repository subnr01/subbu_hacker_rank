https://www.hackerrank.com/challenges/sparse-arrays

/*
Sample Input

4
aba
baba
aba
xzxb
3
aba
xzxb
ab
Sample Output

2
1
0

*/



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    map<string,int>m;
    int n,q;
    string str;
   
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        m[str]++;
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> str;
        cout << m[str] << endl;
    }
    return 0;

}
