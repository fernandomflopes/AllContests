#include <iostream>
#include <vector>

using namespace std;

int main() {

    double a,b,c, media;

    vector<int> v;
    
    cin >> a >> b >> c;

    media = (((a * 2.0) + (b * 3.0) + (c * 5.0)) / 10.0);

    printf("MEDIA = %.1lf\n", media);

    return 0;

}