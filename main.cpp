#include <set>
#include <iostream>

#include "point.h"

int main() {
    std::set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(const auto& i: s)
        std::cout << i << "\n";

    point a;
    a.x = 10;
    a.y = 20;
    
    std::cout << a.x << " " << a.y << "\n";
	
	point b;
	b.x = 20;
	b.y = 10;
	
	auto c = Calc(a, b);
	std::cout << c.x << " " << c.y << "\n";
}