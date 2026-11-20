#include <iostream>
#include <vector>
using namespace std;

void printDouble(double d) {
    if (abs(d) < 1e-7) cout << 0.0;
    else cout << d;
}

struct Point {
    double x, y, z;
};

struct Particle {
    Point p,v;
    double m;
};

Point sum(Point p1, Point p2) {
    p1.x += p2.x;
    p1.y += p2.y;
    p1.z += p2.z;
    return p1;
}

Point mul(double a, Point p) {
    p.x *= a;
    p.y *= a;
    p.z *= a;
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);    
    cout.setf(ios::fixed);
    cout.precision(5);
    int n, k;
    while (cin >> n >> k) {
        vector<Particle> particula(n, Particle());
        Particle mass_center;
        mass_center.p.x = 0, mass_center.p.y = 0, mass_center.p.z = 0;
        mass_center.v.x = 0, mass_center.v.y = 0, mass_center.v.z = 0;
        mass_center.m = 0;
        for (int i = 0; i < n; ++i) {
            cin >> particula[i].p.x >> particula[i].p.y >> particula[i].p.z >> particula[i].v.x >> particula[i].v.y >> particula[i].v.z >> particula[i].m;
            mass_center.p = sum(mass_center.p, mul(particula[i].m, particula[i].p));
            mass_center.v = sum(mass_center.v, mul(particula[i].m, particula[i].v));
            mass_center.m += particula[i].m;
        }
        mass_center.m = 1/mass_center.m;
        mass_center.p = mul(mass_center.m, mass_center.p);
        mass_center.v = mul(mass_center.m, mass_center.v);
        double t_total = 0;
        while (k > 0) {
            double t;
            cin >> t;
            t_total += t;
            mass_center.p = sum(mass_center.p, mul(t, mass_center.v));
            printDouble(mass_center.p.x);
            cout << ' ';
            printDouble(mass_center.p.y);
            cout << ' ';
            printDouble(mass_center.p.z);
            cout << '\n';
            --k;
        }
        for (int i = 0; i < n; ++i) {
            particula[i].p = sum(particula[i].p, mul(t_total, particula[i].v ) );
            printDouble (particula[i].p.x);
            cout << ' ';
            printDouble (particula[i].p.y);
            cout << ' ';
            printDouble (particula[i].p.z);
            cout << '\n';
        }
        cout << '\n';
    }
}