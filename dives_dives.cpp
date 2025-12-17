#include <iostream>
#include <string>
#include <random>



float gen_weighted_num(){
    std::random_device rd; 
    std::mt19937 gen(rd()); 

    std::discrete_distribution<> weighted_choice({5,10,15,30,20,15,5}); 

    int choice= weighted_choice(gen);
    std::uniform_real_distribution<>dist1(1.4,1.9); 
    std::uniform_real_distribution<>dist2(2,2.5);
    std::uniform_real_distribution<>dist3(2.5,3);
    std::uniform_real_distribution<>dist4(3,3.5);
    std::uniform_real_distribution<>dist5(3.5,4); 
    std::uniform_real_distribution<>dist6(4,4.5);
    std::uniform_real_distribution<>dist7(4.5,5);
    float result; 
    
    switch (choice){
        case 0: result= dist1(gen);break;
        case 1: result= dist2(gen);break;
        case 2: result= dist3(gen);break; 
        case 3: result= dist4(gen);break; 
        case 4: result= dist5(gen);break;
        case 5: result= dist6(gen);break;
        default: result = dist7(gen);break; 

    }
    return result; 

}


class judge{};

class diver{
    public: 
    std::string diver_name; 
    std::string diver_country; 

    void display_info(){
        std::cout << "Diver Name: " << diver_name << ", Country: " << diver_country << std::endl;
    }

    float dive_difficulty(){
        float difficulty = gen_weighted_num();
        return difficulty;

    }

}; 


int main() {

    diver diver1;
    diver1.diver_name= "TAM"; 
    diver1.diver_country= "MEX"; 

    diver1.display_info();
    diver1.dive_difficulty();

    return 0;
}
