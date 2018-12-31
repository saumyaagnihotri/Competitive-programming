#include < bits / stdc ++. h >
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(null);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin

         (),
        v.end());
    reverse(v.begin(), v.end());
    auto a = min_element(v.begin(), v.end());
    auto a1 = min_element(v.begin(), v.end() - 1);
    auto b = max_element(v.begin(), v

                                        .end());
    auto b1 = max_element(v.begin() + 1, v.end());
    int check1 = *b - *a1;
    int check2 = *b1 - *a;
    if (check1 == 0 || check2 == 0)
        cout << 0;
    else {
        if (check1 > = check2)
            cout << check2;
        else
            cout << check1;
    }
}
