#include <bits/stdc++.h>
#include <sstream>
using namespace std;

typedef long long ll;
//loop
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
//STL
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))

//const
#define MOD 1000000007 //10^9+7:合同式の法

//acronym
#define PB push_back //vectorヘの挿入
#define MP make_pair //pairのコンストラクタ
#define F first //pairの一つ目の要素
#define S second //pairの二つ目の要素

void Main() {
	// string関係
	// - 全置換
	string s;
	replace(ALL(s), ',', ' ');
	// - 前方置換
	string s = "a, b";
	string t = ", ";  // 検索文字列
	auto pos = s.find(t);  // 検索文字列が見つかった位置 （pos == 1）
	auto len = t.length(); // 検索文字列の長さ （len == 2）
	if (pos != string::npos) {
	  s.replace(pos, len, "|"); // s == "a|b"
	}
	// - 文字列検索 KMP(Knuth-Morris-Pratt)法
	//   - リンク集参考
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Main();
	return 0;
}
