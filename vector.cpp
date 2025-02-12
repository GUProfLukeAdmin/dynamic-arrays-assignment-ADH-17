#include <vector>
#include <iostream>
using namespace std;


void part1() {
    //TODO: Implement part 1
    vector<int> vec(10000, 1);
    // log the size and capacity of the vector
    cout << "After Adding Element s: Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;

    //Remove half of the elements of the vector
    for(int i = 50000; i > 2500; i--){
        vec.pop_back();
    }
    cout << "After resizing: Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;

    //shrink to fit the vector 
    vec.shrink_to_fit(); 
    cout << "After shrink_to_fit(): Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;
}

void part2() {
    //TODO: Implement part 2
    // a boolean vector and char vector both with 10000 elements 
    vector<bool> vec_bool(10000, true); 
    vector<char> vec_char(10000, 'a');

    cout << "Memory usage of vector<bool> = " << vec_bool.size()/8 << " due to bit condensing" << endl;
    cout << "Memory usage of vector<char> = " << vec_char.size() << " normal sizing" << endl;


}

int main() {
    part1();
    part2();
    return 0;
}