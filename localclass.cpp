#include<bits/stdc++.h>
using namespace std;
 
class A {
        private:
                int x;
        public:
                void read() {
                        x = 50;
                }
        void show() {
                cout << " x=" << x <<endl;
        }
};
 
int w = 200; // global variable w
 
int main() {
        static int z; // static variable z
        class B // local class
        {
                private:
                        int y;
                public:
                        void read() {
                                y = 60;
                                z = 70;
                        }
                void show() {
                        cout << " y=" << y <<endl;
                        cout << " z=" << z <<endl;
                        cout << " w=" << w <<endl;
                }
        };
        A a;
        a.read();
        a.show();
 
        B b;
        b.read();
        b.show();
}