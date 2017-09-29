//работа производилась в Visual Studio


#include <iostream>
#include <math.h>

using namespace std;
int main()
{   // 1
    cout << "1)";
    double pi = 3.14;
    cout << pi << endl;
    // 2
    cout << "2)";
    cout << " 1 " << "13 " << "49" << endl;
    // 3
    cout << "3)";
    double symbol = 0;
    cin >> symbol;
    cout << " 1 " << symbol << " 13 " << symbol << " 49 " << symbol << endl;
    // 4
    cout << "4)";
    cout << "2  " << "55  " << "90" << endl;
    // 5
    cout << "5)";
    double a = 0;
    cin >> a;
    double x = 12 * a * a + 7 * a - 12;
    double y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
    cout << " x=" << x << endl;
    cout << "y=" << y << endl;
    // 6
    cout << "6)";
    double v = 0;
    cout << "v=";
    cin >> v;
    double m = 0;
    cout << "m=";
    cin >> m;
    double p = m*v;
    cout << "p=" << p << endl;
    // 7
    cout << "7)";
    cout << "a=";
    cin >> a;
    if (a == 0) { cout << "error" << endl;
    } else { cout << "b=";
             double b = 0;
             cin >> b;
             cout << "x=" << -b / a << endl;
    }
    // 8
    cout << "8)";
    cout << "coordinates A=";
    double x1 = 0;
    double y1 = 0;
    cin >> x1 >> y1;
    cout << "coordinates B=";
    double x2 = 0;
    double y2 = 0;
    cin >> x2 >> y2;
    double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    cout << "distance=" << distance << endl;
    // 9
    cout << "9)";
    cout << "h=";
    double h = 0;
    cin >> h;
    cout << "a=";
    cin >> a;
    cout << "b=";
    double b = 0;
    cin >> b;
    if (b > a) {double c = (((b-a)/2)*((b-a)/2)+h*h);
               p = a+b+2*c;
    } else  {double c = (((a-b)/2)*((a-b)/2)+h*h);
               p = a+b+2*c;
    }
    cout << "p=" << p << endl;
    // 10
    cout << "10)";
    cout << "R=";
    double rad1 = 0;
    cin >> rad1;
    cout << "r=";
    double rad2 = 0;
    cin >> rad2;
    double s = 3.14*(rad1*rad1 - rad2*rad2);
    cout << "s=" << s << endl;
    // 11
    cout << "11)";
    cout << "a=";
    cin >> a;
    s = 4 * a*a;
    v = a*a*a;
    cout << "s=" << s << endl;
    cout << "v=" << v << endl;
    // 12
    cout << "12)";
    cout << "a=";
    cin >> a;
    p = 2 * a;
    cout << "p=" << p << endl;
    // 13
    cout << "13)";
    cout << "r=";
    cin >> r;
    double d = 2 * r;
    cout << "d=" << d << endl;
    return 0;
}
