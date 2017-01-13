#include <iostream>

using namespace std;

int main(){
    int a, b, c, g, m, s, temp;
    cin >> a >> b >> c;
    g = a;
    m = b;
    s = c;
    if (g < m){
        temp = g;
        g = m;
        m = temp;
    }if (m < s){
        temp = m;
        m = s;
        s = temp;
    }if (g < m){
        temp = g;
        g = m;
        m = temp;
    }
    cout << s << "\n" << m << "\n" << g << "\n\n" << a << "\n" << b << "\n" << c << endl;
    return 0;
}
