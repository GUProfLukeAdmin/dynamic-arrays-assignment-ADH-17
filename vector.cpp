#include <vector>
#include <iostream>
using namespace std;


void part1() {
    //TODO: Implement part 1
    vector<int> vec{};
    // add 50000 integers to the vector
    for(int i = 0; i < 50000; i++){
        vec.push_back(i); 
        
    }
    // log the size and capacity of the vector
    cout << "After Adding Elements: Size = " << vec.size() << ", Capacity = " << vec.capacity() << endl;

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
    vector<bool> vec_bool(10000); 
    vector<char> vec_char(10000);


    cout << "Memory usage of vector<bool>: " << vec_bool.capacity() << " bytes" << endl;
    cout << "Memory usage of vector<char>: " << vec_char.capacity() << " bytes" << endl;
}

int main() {
    part1();
    part2();
    return 0;
}