#include <iostream>
#include <cmath>

using namespace std;

float distanse_between_points(int x0, int y0, int x1, int y1) {
    return sqrt(pow((x0-x1),2)+pow((y0-y1),2));
}

int main() {
    int x0, y0, x1, y1, x, y;
    std::cin >> x0 >> y0 >> x1 >> y1 >> x >> y;

    float section = distanse_between_points(x0, y0, x1, y1);
    float section_point_0 = distanse_between_points(x, y, x0, y0);
    float section_point_1 = distanse_between_points(x, y, x1, y1);

    if ( (pow(section_point_0, 2) + pow(section, 2) >= pow(section_point_1, 2)) && (pow(section, 2) + pow(section_point_1, 2) >= pow(section_point_0, 2)) ) {
        float p = (section + section_point_0 + section_point_1) / 2;
        // формула герона 
        float s = sqrt(p*(p-section)*(p-section_point_0)*(p-section_point_1));
        float rsult = (s / section) * 2;

        cout << rsult << endl;
    } else {
        cout << min(section_point_0, section_point_1) << endl;
    }
}