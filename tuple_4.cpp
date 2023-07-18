#include<iostream>
#include<tuple>

using namespace std;

int main() {

    tuple <char, int, float> t1('a', 75, 6.7);
    tuple <int, char, float> t2(10, 't', 77.9);

    auto t3 = tuple_cat(t1, t2);

    cout << "The first tuple contains =  ";
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl << endl;
    cout << "The second tuple contains =  ";
    cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl << endl;
    cout << "The new tuple is = ";
    cout << get<0>(t3) << " " << get<1>(t3) << " " << get<2>(t3) << " "
        << get<3>(t3) << " " << get<4>(t3) << " " << get<5>(t3) << endl;

    return 0;
}