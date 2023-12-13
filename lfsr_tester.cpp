#include <iostream>
#include <bitset>

#include "lfsr.hpp"

int main(){
    LFSR lfsr_tester((uint16_t)0b1010101010101010, (uint16_t)2);

    std::cout << "Generating 100 numbers with the LFSR and checking for repeats:\n";
    uint32_t k = 100;
    uint32_t gen;
    uint32_t gen2;
    for(;k!=0;k--){
        gen = lfsr_tester.generate(1);
        std::cout << std::bitset<16>(gen).to_string() << ' ';
        gen2 = lfsr_tester.generate(1);
        std::cout << std::bitset<16>(gen2).to_string() << ' ';
        if(gen == gen2){
            std::cout << "Repeat found!\n";
            break;
        }
    }

    std::cout << "\nStepping through the LFSR 5 times:\n";
    int i = 5;
    for(;i!=0;i--){
        std::cout << "Step " << 5-i+1 << ": " << lfsr_tester.toString() << std::endl;
    }

    return 0;
}
