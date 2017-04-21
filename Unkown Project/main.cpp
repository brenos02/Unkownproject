//
//  main.cpp
//  Unkown Project
//
//  Created by Breno Sallouti on 21/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int age;
    int i;
    i= age;
    age= 88;
    std::cout<<"Please input your desired age:";
    std::cin>>i;
    
    if (i==8) {
        std::cout<<"Arthur\n";
    }
    
    if (i==12){
        std::cout<<"Caio\n";
    }
    
    if (i==14){
        std::cout<<"Breno\n";
    }
 
    if (i==43){
        std::cout<<"Juliana\n";
    }
    
    if (i==45){
        std::cout<<"Roberto\n";
    }
    
    if (i==0<7){
        std::cout<<"Nobody with this age\n";
    }
    
    if (i==13){
        std::cout<<"Nobody with this age\n";
    }
    
    if (i==15<42){
        std::cout<<"Nobody with this age\n";
    }
    
    if (i==44){
        std::cout<<"Nobody with this age\n";
    }
    
    if (i>46){
        std::cout<<"Nobody with this age\n";
    }
    return 1;
    
}
