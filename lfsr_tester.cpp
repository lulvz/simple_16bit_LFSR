#include <iostream>
#include <bitset>

#include "lfsr.hpp"

int main(){
    LFSR lfsr_bruh((uint16_t)0b1010101010101010, (uint16_t)2);

    for(int i = 0; i<100; i++){
        std::cout << lfsr_bruh.generate(i) << std::endl;
    }
    // int k = 5;
    // for(;k!=0;k--){
    //     std::cout << std::bitset<1>(lfsr_bruh.step()).to_string() << ' ' << lfsr_bruh.toString() << std::endl;
    // }

    return 0;
}