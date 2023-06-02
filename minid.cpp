#include <iostream>
#include <string>
#include "mineral.h"
//#include "database.cpp"

const int MAX = 200;
Mineral tree[MAX];
std::string mineral_list[MAX];
int mineral_list_size = 100;

void assignMinerals(){

tree[0].curr_q = "Is this a mineral (hopefully from the list)? (yes/no)";
tree[0].a1 = "yes";
tree[0].a2 = "no";
tree[0].a3 = "";
tree[0].a4 = "";
tree[0].q1 = 2;
tree[0].q2 = 1;
tree[0].q3 = -1;
tree[0].q4 = -1;

tree[1].curr_q = "Bruh then why you even using this lol";
tree[1].a1 = "";
tree[1].a2 = "";
tree[1].a3 = "";
tree[1].a4 = "";
tree[1].q1 = -1;
tree[1].q2 = -1;
tree[1].q3 = -1;
tree[1].q4 = -1;

tree[2].curr_q = "What is the luster of the mineral? (metallic/non-metallic light color/non-metallic dark color)";
tree[2].a1 = "metallic";
tree[2].a2 = "non-metallic light color";
tree[2].a3 = "non-metallic dark color";
tree[2].a4 = "";
tree[2].q1 = 3;
tree[2].q2 = -2;
tree[2].q3 = -2;
tree[2].q4 = -1;

tree[3].curr_q = "Is the mineral magnetic? (yes/no)";
tree[3].a1 = "yes";
tree[3].a2 = "no";
tree[3].a3 = "";
tree[3].a4 = "";
tree[3].q1 = 101;
tree[3].q2 = 4;
tree[3].q3 = -1;
tree[3].q4 = -1;

tree[4].curr_q = "Is the mineral silver or gold? (silver/gold)";
tree[4].a1 = "silver";
tree[4].a2 = "gold";
tree[4].a3 = "";
tree[4].a4 = "";
tree[4].q1 = 5;
tree[4].q2 = 7;
tree[4].q3 = -1;
tree[4].q4 = -1;

tree[5].curr_q = "Is the mineral softer or harder than a fingernail? (softer/harder)";
tree[5].a1 = "softer";
tree[5].a2 = "harder";
tree[5].a3 = "";
tree[5].a4 = "";
tree[5].q1 = 102;
tree[5].q2 = 6;
tree[5].q3 = -1;
tree[5].q4 = -1;

tree[6].curr_q = "What's the mineral's streak? (black/red-brown)";
tree[6].a1 = "black";
tree[6].a2 = "red-brown";
tree[6].a3 = "";
tree[6].a4 = "";
tree[6].q1 = 103;
tree[6].q2 = 104;
tree[6].q3 = -1;
tree[6].q4 = -1;

tree[7].curr_q = "How does the mineral appear? (bright-brassy/tarnished)";
tree[7].a1 = "bright-brassy";
tree[7].a2 = "tarnished";
tree[7].a3 = "";
tree[7].a4 = "";
tree[7].q1 = 105;
tree[7].q2 = 106;
tree[7].q3 = -1;
tree[7].q4 = -1;

tree[8].curr_q = "";
tree[8].a1 = "";
tree[8].a2 = "";
tree[8].a3 = "";
tree[8].a4 = "";
tree[8].q1 = -1;
tree[8].q2 = -1;
tree[8].q3 = -1;
tree[8].q4 = -1;


tree[101].curr_q = "Magnetite";
tree[101].a1 = "";
tree[101].a2 = "";
tree[101].a3 = "";
tree[101].a4 = "";
tree[101].q1 = -1;
tree[101].q2 = -1;
tree[101].q3 = -1;
tree[101].q4 = -1;

tree[102].curr_q = "Graphite";
tree[102].a1 = "";
tree[102].a2 = "";
tree[102].a3 = "";
tree[102].a4 = "";
tree[102].q1 = -1;
tree[102].q2 = -1;
tree[102].q3 = -1;
tree[102].q4 = -1;

tree[103].curr_q = "Galena";
tree[103].a1 = "";
tree[103].a2 = "";
tree[103].a3 = "";
tree[103].a4 = "";
tree[103].q1 = -1;
tree[103].q2 = -1;
tree[103].q3 = -1;
tree[103].q4 = -1;

tree[104].curr_q = "Hematite";
tree[104].a1 = "";
tree[104].a2 = "";
tree[104].a3 = "";
tree[104].a4 = "";
tree[104].q1 = -1;
tree[104].q2 = -1;
tree[104].q3 = -1;
tree[104].q4 = -1;

tree[105].curr_q = "Pyrite";
tree[105].a1 = "";
tree[105].a2 = "";
tree[105].a3 = "";
tree[105].a4 = "";
tree[105].q1 = -1;
tree[105].q2 = -1;
tree[105].q3 = -1;
tree[105].q4 = -1;

tree[106].curr_q = "Chalcopyrite";
tree[106].a1 = "";
tree[106].a2 = "";
tree[106].a3 = "";
tree[106].a4 = "";
tree[106].q1 = -1;
tree[106].q2 = -1;
tree[106].q3 = -1;
tree[106].q4 = -1;

}



int main(){
    assignMinerals();
    //do while loop?
    int final;
    std::cout << "Welcome to this Rock Identification Program!\n";
    std::cout << "Please choose from one of the answers and type exact.\n";
    std::cout << "If you want to see the list of all the minerals in this database\n";
    std::cout << "before you identify type 'list' and if not type anything else." << std::endl;
    std::string list;
    std::cin >> list;
    if(list == "list"){
        for(int i = 100; i < 100+mineral_list_size; i++){
            std::cout << mineral_list[i] <<std::endl;
        }
    }
    else{
    int i = 0;
    while(i < 100){
        std::cout << tree[i].curr_q << std::endl;
        std::string temp_ans;
        std::cin >> temp_ans;
        if(temp_ans == tree[i].a1){
            i = tree[i].q1;
        }
        else if(temp_ans == tree[i].a2){
            i = tree[i].q2;
        }
        else if(temp_ans == tree[i].a3){
            i = tree[i].q3;
        }
        else if(temp_ans == tree[i].a4){
            i = tree[i].q4;
        }
        else{
            std::cout << "C'mon put in a real answer! I'll tell you again until you do so!" << std::endl;
        }
    }
    final = i;
    }
    std::cout << "If it's a mineral from the list, the mineral is " << tree[final].curr_q << std::endl; 
    return 0;
}


