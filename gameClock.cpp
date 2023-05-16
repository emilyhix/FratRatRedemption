#include <iostream>
#include <chrono>
#include <thread> 

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std; 



int main()
{
    unsigned tcnt = 0; 
    while (true) {
        cout<<tcnt<<"\n"; 
        tcnt++; 
        this_thread::sleep_for(std::chrono::milliseconds(100)); // sleep for 100ms
    }
}