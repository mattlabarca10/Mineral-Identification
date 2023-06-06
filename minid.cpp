#include <iostream>
#include <fstream>
#include <string>
#include "mineral.h"

const int MAX = 200;
Mineral tree[MAX];
const int MLS = 30; //mineral list size
std::string mineral_list[MLS];

void assignTree(){

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

tree[2].curr_q = "What is the luster of the mineral? (metallic/non-metallic-light-color/non-metallic-dark-color)";
tree[2].a1 = "metallic";
tree[2].a2 = "non-metallic-light-color";
tree[2].a3 = "non-metallic-dark-color";
tree[2].a4 = "";
tree[2].q1 = 3;
tree[2].q2 = 8;
tree[2].q3 = 14;
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

tree[8].curr_q = "Is this mineral harder or softer than a steel nail? (harder/softer)";
tree[8].a1 = "harder";
tree[8].a2 = "softer";
tree[8].a3 = "";
tree[8].a4 = "";
tree[8].q1 = 9;
tree[8].q2 = 12;
tree[8].q3 = -1;
tree[8].q4 = -1;

tree[9].curr_q = "Does this mineral have good cleavage? (yes/no)"; //(ayo) (don't type ayo)
tree[9].a1 = "yes";
tree[9].a2 = "no";
tree[9].a3 = "";
tree[9].a4 = "";
tree[9].q1 = 10;
tree[9].q2 = 11;
tree[9].q3 = -1;
tree[9].q4 = -1;

tree[10].curr_q = "Does it cleave with 90 degree angles or not? (yes/no)";
tree[10].a1 = "yes";
tree[10].a2 = "no";
tree[10].a3 = "";
tree[10].a4 = "";
tree[10].q1 = 107;
tree[10].q2 = 108;
tree[10].q3 = -1;
tree[10].q4 = -1;

tree[11].curr_q = "Is the mineral Red/Brown or Green in color? (red-brown/green)";
tree[11].a1 = "red-brown";
tree[11].a2 = "green";
tree[11].a3 = "";
tree[11].a4 = "";
tree[11].q1 = 109;
tree[11].q2 = 110;
tree[11].q3 = -1;
tree[11].q4 = -1;

tree[12].curr_q = "Does this mineral have good cleavage? (yes/no)";
tree[12].a1 = "yes";
tree[12].a2 = "no";
tree[12].a3 = "";
tree[12].a4 = "";
tree[12].q1 = 111;
tree[12].q2 = 13;
tree[12].q3 = -1;
tree[12].q4 = -1;

tree[13].curr_q = "What color is its streak? (yellow-brown/red-brown/green/white)";
tree[13].a1 = "yellow-brown";
tree[13].a2 = "red-brown";
tree[13].a3 = "green";
tree[13].a4 = "white";
tree[13].q1 = 112;
tree[13].q2 = 113;
tree[13].q3 = 114;
tree[13].q4 = 115;

tree[14].curr_q = "Is the mineral harder than a steel nail, softer than a nail & harder than a fingernail, or softer than a fingernail? (harder/medium/softer)";
tree[14].a1 = "harder";
tree[14].a2 = "medium";
tree[14].a3 = "softer";
tree[14].a4 = "";
tree[14].q1 = 15;
tree[14].q2 = 17;
tree[14].q3 = 20;
tree[14].q4 = -1;

tree[15].curr_q = "Does the mineral have good cleavage? (yes/no)";
tree[15].a1 = "yes";
tree[15].a2 = "no";
tree[15].a3 = "";
tree[15].a4 = "";
tree[15].q1 = 16;
tree[15].q2 = 118;
tree[15].q3 = -1;
tree[15].q4 = -1;

tree[16].curr_q = "Does the mineral have striations? (yes/no)";
tree[16].a1 = "yes";
tree[16].a2 = "no";
tree[16].a3 = "";
tree[16].a4 = "";
tree[16].q1 = 116;
tree[16].q2 = 117;
tree[16].q3 = -1;
tree[16].q4 = -1;

tree[17].curr_q = "What kind of cleavage does the mineral have? (cubic/non-cubic/none)";
tree[17].a1 = "cubic";
tree[17].a2 = "non-cubic";
tree[17].a3 = "none";
tree[17].a4 = "";
tree[17].q1 = 119;
tree[17].q2 = 18;
tree[17].q3 = 19;
tree[17].q4 = -1;

tree[18].curr_q = "Does it slightly bubble/fizz with HCL? (yes/no)";
tree[18].a1 = "yes";
tree[18].a2 = "no";
tree[18].a3 = "";
tree[18].a4 = "";
tree[18].q1 = 120;
tree[18].q2 = 100;
tree[18].q3 = -1;
tree[18].q4 = -1;

tree[19].curr_q = "Which best describes the mineral's appearance? (yellow-brown/bright-yellow/green/contains-nodules)";
tree[19].a1 = "yellow-brown";
tree[19].a2 = "bright-yellow";
tree[19].a3 = "green";
tree[19].a4 = "contains-nodules";
tree[19].q1 = 121;
tree[19].q2 = 122;
tree[19].q3 = 123;
tree[19].q4 = 124;

tree[20].curr_q = "Does the mineral have good cleavage? (yes/no)";
tree[20].a1 = "yes";
tree[20].a2 = "no";
tree[20].a3 = "";
tree[20].a4 = "";
tree[20].q1 = 21;
tree[20].q2 = 22;
tree[20].q3 = -1;
tree[20].q4 = -1;

tree[21].curr_q = "What kind of 'sheets' does this mineral have? (thin/thick)";
tree[21].a1 = "thin";
tree[21].a2 = "thick";
tree[21].a3 = "";
tree[21].a4 = "";
tree[21].q1 = 125;
tree[21].q2 = 126;
tree[21].q3 = -1;
tree[21].q4 = -1;

tree[22].curr_q = "Is it 'slippery'? (yes/no)";
tree[22].a1 = "yes";
tree[22].a2 = "no";
tree[22].a3 = "";
tree[22].a4 = "";
tree[22].q1 = 23;
tree[22].q2 = 24;
tree[22].q3 = -1;
tree[22].q4 = -1;

tree[23].curr_q = "Is it pure white or light colored? (white/light)";
tree[23].a1 = "yes";
tree[23].a2 = "no";
tree[23].a3 = "";
tree[23].a4 = "";
tree[23].q1 = 127;
tree[23].q2 = 128;
tree[23].q3 = -1;
tree[23].q4 = -1;

tree[24].curr_q = "Is it white? (yes/no)";
tree[24].a1 = "yes";
tree[24].a2 = "no";
tree[24].a3 = "";
tree[24].a4 = "";
tree[24].q1 = 129;
tree[24].q2 = 100;
tree[24].q3 = -1;
tree[24].q4 = -1;

tree[25].curr_q = "";
tree[25].a1 = "";
tree[25].a2 = "";
tree[25].a3 = "";
tree[25].a4 = "";
tree[25].q1 = -1;
tree[25].q2 = -1;
tree[25].q3 = -1;
tree[25].q4 = -1;

tree[100].curr_q = "I don't know that one then not gonna lie...";
tree[100].a1 = "";
tree[100].a2 = "";
tree[100].a3 = "";
tree[100].a4 = "";
tree[100].q1 = -1;
tree[100].q2 = -1;
tree[100].q3 = -1;
tree[100].q4 = -1;

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

tree[107].curr_q = "Hornblende";
tree[107].a1 = "";
tree[107].a2 = "";
tree[107].a3 = "";
tree[107].a4 = "";
tree[107].q1 = -1;
tree[107].q2 = -1;
tree[107].q3 = -1;
tree[107].q4 = -1;

tree[108].curr_q = "Augite";
tree[108].a1 = "";
tree[108].a2 = "";
tree[108].a3 = "";
tree[108].a4 = "";
tree[108].q1 = -1;
tree[108].q2 = -1;
tree[108].q3 = -1;
tree[108].q4 = -1;

tree[109].curr_q = "Garnet";
tree[109].a1 = "";
tree[109].a2 = "";
tree[109].a3 = "";
tree[109].a4 = "";
tree[109].q1 = -1;
tree[109].q2 = -1;
tree[109].q3 = -1;
tree[109].q4 = -1;

tree[110].curr_q = "Olivine";
tree[110].a1 = "";
tree[110].a2 = "";
tree[110].a3 = "";
tree[110].a4 = "";
tree[110].q1 = -1;
tree[110].q2 = -1;
tree[110].q3 = -1;
tree[110].q4 = -1;

tree[111].curr_q = "Biotite Mica";
tree[111].a1 = "";
tree[111].a2 = "";
tree[111].a3 = "";
tree[111].a4 = "";
tree[111].q1 = -1;
tree[111].q2 = -1;
tree[111].q3 = -1;
tree[111].q4 = -1;

tree[112].curr_q = "Limonite";
tree[112].a1 = "";
tree[112].a2 = "";
tree[112].a3 = "";
tree[112].a4 = "";
tree[112].q1 = -1;
tree[112].q2 = -1;
tree[112].q3 = -1;
tree[112].q4 = -1;

tree[113].curr_q = "Hematite";
tree[113].a1 = "";
tree[113].a2 = "";
tree[113].a3 = "";
tree[113].a4 = "";
tree[113].q1 = -1;
tree[113].q2 = -1;
tree[113].q3 = -1;
tree[113].q4 = -1;

tree[114].curr_q = "Malachite";
tree[114].a1 = "";
tree[114].a2 = "";
tree[114].a3 = "";
tree[114].a4 = "";
tree[114].q1 = -1;
tree[114].q2 = -1;
tree[114].q3 = -1;
tree[114].q4 = -1;

tree[115].curr_q = "Bauxite";
tree[115].a1 = "";
tree[115].a2 = "";
tree[115].a3 = "";
tree[115].a4 = "";
tree[115].q1 = -1;
tree[115].q2 = -1;
tree[115].q3 = -1;
tree[115].q4 = -1;

tree[116].curr_q = "Plagioclase";
tree[116].a1 = "";
tree[116].a2 = "";
tree[116].a3 = "";
tree[116].a4 = "";
tree[116].q1 = -1;
tree[116].q2 = -1;
tree[116].q3 = -1;
tree[116].q4 = -1;

tree[117].curr_q = "Orthoclase";
tree[117].a1 = "";
tree[117].a2 = "";
tree[117].a3 = "";
tree[117].a4 = "";
tree[117].q1 = -1;
tree[117].q2 = -1;
tree[117].q3 = -1;
tree[117].q4 = -1;

tree[118].curr_q = "Quartz";
tree[118].a1 = "";
tree[118].a2 = "";
tree[118].a3 = "";
tree[118].a4 = "";
tree[118].q1 = -1;
tree[118].q2 = -1;
tree[118].q3 = -1;
tree[118].q4 = -1;

tree[119].curr_q = "Halite";
tree[119].a1 = "";
tree[119].a2 = "";
tree[119].a3 = "";
tree[119].a4 = "";
tree[119].q1 = -1;
tree[119].q2 = -1;
tree[119].q3 = -1;
tree[119].q4 = -1;

tree[120].curr_q = "Calcite";
tree[120].a1 = "";
tree[120].a2 = "";
tree[120].a3 = "";
tree[120].a4 = "";
tree[120].q1 = -1;
tree[120].q2 = -1;
tree[120].q3 = -1;
tree[120].q4 = -1;

tree[121].curr_q = "Limonite";
tree[121].a1 = "";
tree[121].a2 = "";
tree[121].a3 = "";
tree[121].a4 = "";
tree[121].q1 = -1;
tree[121].q2 = -1;
tree[121].q3 = -1;
tree[121].q4 = -1;

tree[122].curr_q = "Sulfur";
tree[122].a1 = "";
tree[122].a2 = "";
tree[122].a3 = "";
tree[122].a4 = "";
tree[122].q1 = -1;
tree[122].q2 = -1;
tree[122].q3 = -1;
tree[122].q4 = -1;

tree[123].curr_q = "Malachite";
tree[123].a1 = "";
tree[123].a2 = "";
tree[123].a3 = "";
tree[123].a4 = "";
tree[123].q1 = -1;
tree[123].q2 = -1;
tree[123].q3 = -1;
tree[123].q4 = -1;

tree[124].curr_q = "Bauxite";
tree[124].a1 = "";
tree[124].a2 = "";
tree[124].a3 = "";
tree[124].a4 = "";
tree[124].q1 = -1;
tree[124].q2 = -1;
tree[124].q3 = -1;
tree[124].q4 = -1;

tree[125].curr_q = "Muscovite Mica";
tree[125].a1 = "";
tree[125].a2 = "";
tree[125].a3 = "";
tree[125].a4 = "";
tree[125].q1 = -1;
tree[125].q2 = -1;
tree[125].q3 = -1;
tree[125].q4 = -1;

tree[126].curr_q = "Selenite (Gypsum)";
tree[126].a1 = "";
tree[126].a2 = "";
tree[126].a3 = "";
tree[126].a4 = "";
tree[126].q1 = -1;
tree[126].q2 = -1;
tree[126].q3 = -1;
tree[126].q4 = -1;

tree[127].curr_q = "Kaolinite";
tree[127].a1 = "";
tree[127].a2 = "";
tree[127].a3 = "";
tree[127].a4 = "";
tree[127].q1 = -1;
tree[127].q2 = -1;
tree[127].q3 = -1;
tree[127].q4 = -1;

tree[128].curr_q = "Talc";
tree[128].a1 = "";
tree[128].a2 = "";
tree[128].a3 = "";
tree[128].a4 = "";
tree[128].q1 = -1;
tree[128].q2 = -1;
tree[128].q3 = -1;
tree[128].q4 = -1;

tree[129].curr_q = "Alabaster (Gypsum)";
tree[129].a1 = "";
tree[129].a2 = "";
tree[129].a3 = "";
tree[129].a4 = "";
tree[129].q1 = -1;
tree[129].q2 = -1;
tree[129].q3 = -1;
tree[129].q4 = -1;

}

void assignMinerals(){
    std::ifstream file("minerals.txt");
    if (!file.is_open()) {
        std::cout << "Failed to open the list." << std::endl;
    }

    std::string mineral_name;
    int count = 0;

    while (std::getline(file, mineral_name) && count < MLS) {
        mineral_list[count] = mineral_name;
        count++;
    }

    file.close();
}


int main(){
    assignTree();
    assignMinerals();
    int final;
    std::cout << "Welcome to this Rock Identification Program!\n";
    std::cout << "Please choose from one of the answers and type exact.\n";
    std::cout << "If you want to see the list of all the minerals in this database\n";
    std::cout << "before you identify type 'list' and if not type anything else." << std::endl;
    std::string list;
    std::cin >> list;
    if(list == "list"){
        for (int i = 0; i < MLS; i++) {
            std::cout << mineral_list[i] << std::endl;
    }
    }
    int i = 0;
    while(i < 100 && i != 1){
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
    
    final = i;
    }
    if(final == 1 || final == 100){
        std::cout << tree[final].curr_q << std::endl;
    } 
    else{
        std::cout << "If it's a mineral from the list, the mineral is " << tree[final].curr_q << std::endl; 
    }
    
    return 0;
}


