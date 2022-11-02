#include "intruso.hpp"
#include <iostream>
Intruso::Intruso() {}

void Intruso::set_senha_vazada(std::string vazou) {

    mapa['A'] = std::string(1, vazou[0]) + vazou [2];
    mapa['B'] = std::string(1, vazou[4]) + vazou[6];
    mapa['C'] = std::string(1, vazou[8]) + vazou[10];
    mapa['D'] = std::string(1, vazou[12]) + vazou[14];
    mapa['E'] = std::string(1, vazou[16]) + vazou[18];
    mapa['1'] = vazou[20];
    mapa['2'] = vazou[22];
    mapa['3'] = vazou[24];
    mapa['4'] = vazou[26];
    mapa['5'] = vazou[28];
    mapa['6'] = vazou[30];
 
    senhas.push_back(mapa);
    // std::cout<< mapa['A'] << " " << mapa['B'] << " " << mapa ['C'] << " " << mapa['D'] << " " << mapa['E'];
    // this->senhas[0] = mapa;
}

std::string Intruso::crack_senha() {
    std::string crack;
    std::map<char, std::string> aux;
    std::map<char, std::string> aux2;
    char caux;
    char caux2;
    char caux3;
    int teste [6] = {0,0,0,0,0,0};

 for(int p = 0; p < senhas.size() -1; p++) {
    
    for (int i=0; i<2; i++){

        for (int j=0; j<2; j++){
            caux = senhas[p]['1'][0];
            caux2 = senhas[p+1]['1'][0];
            
            
            if (p+2 < senhas.size()){
                caux3 = senhas[p+2]['1'][0];
            if (senhas[p][caux][i] == senhas[p+2][caux3][j] && teste[0]==0){
                for (int k=0; k<2; k++){
                if (senhas[p][caux][i] == senhas[p+1][caux2][k]){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                teste[0]=1;
                }
            }
            } }else{

            if (senhas[p][caux][i] == senhas[p+1][caux2][j] && teste[0]==0){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                 
                teste[0]=1;
            
            }
        }
        }
        }
         

     for (int i=0; i<2; i++){

        for (int j=0; j<2; j++){
            caux = senhas[p]['2'][0];
            caux2 = senhas[p+1]['2'][0];
            
            
            if (p+2 < senhas.size()){
                caux3 = senhas[p+2]['2'][0];
            if (senhas[p][caux][i] == senhas[p+2][caux3][j] && teste[1]==0){
                for (int k=0; k<2; k++){
                if (senhas[p][caux][i] == senhas[p+1][caux2][k]){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                teste[1]=1;
                }
            }
            }} else{

            if (senhas[p][caux][i] == senhas[p+1][caux2][j] && teste[1]==0){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                 
                teste[1]=1;
            
            }
        }
        
     }}
        for (int i=0; i<2; i++){

        for (int j=0; j<2; j++){
            caux = senhas[p]['3'][0];
            caux2 = senhas[p+1]['3'][0];
            
            
            if (p+2 < senhas.size()){
                caux3 = senhas[p+2]['3'][0];
            if (senhas[p][caux][i] == senhas[p+2][caux3][j] && teste[2]==0){
                for (int k=0; k<2; k++){
                if (senhas[p][caux][i] == senhas[p+1][caux2][k]){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                teste[2]=1;
                }
            }
            }} else{

            if (senhas[p][caux][i] == senhas[p+1][caux2][j] && teste[2]==0){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                 
                teste[2]=1;
            
            }
        }
        }}

        for (int i=0; i<2; i++){

        for (int j=0; j<2; j++){
            caux = senhas[p]['4'][0];
            caux2 = senhas[p+1]['4'][0];
            
            
            if (p+2 < senhas.size()){
                caux3 = senhas[p+2]['4'][0];
            if (senhas[p][caux][i] == senhas[p+2][caux3][j] && teste[3]==0){
                for (int k=0; k<2; k++){
                if (senhas[p][caux][i] == senhas[p+1][caux2][k]){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                teste[3]=1;
                }
            }
            } }else{

            if (senhas[p][caux][i] == senhas[p+1][caux2][j] && teste[3]==0){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                 
                teste[3]=1;
            
            }
        }}
        }

        for (int i=0; i<2; i++){

        for (int j=0; j<2; j++){
            caux = senhas[p]['5'][0];
            caux2 = senhas[p+1]['5'][0];
            
            
            if (p+2 < senhas.size()){
                caux3 = senhas[p+2]['5'][0];
            if (senhas[p][caux][i] == senhas[p+2][caux3][j] && teste[4]==0){
                for (int k=0; k<2; k++){
                if (senhas[p][caux][i] == senhas[p+1][caux2][k]){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                teste[4]=1;
                }
            }
            }}else{

            if (senhas[p][caux][i] == senhas[p+1][caux2][j] && teste[4]==0){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                 
                teste[4]=1;
            
            }
        }
        }}
        
        for (int i=0; i<2; i++){

        for (int j=0; j<2; j++){
            caux = senhas[p]['6'][0];
            caux2 = senhas[p+1]['6'][0];
            
            
            if (p+2 < senhas.size()){
                caux3 = senhas[p+2]['6'][0];
            if (senhas[p][caux][i] == senhas[p+2][caux3][j] && teste[5]==0){
                for (int k=0; k<2; k++){
                if (senhas[p][caux][i] == senhas[p+1][caux2][k]){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                teste[5]=1;
                }
            }
            }} else{

            if (senhas[p][caux][i] == senhas[p+1][caux2][j] && teste[5]==0){
                crack += std::string(1,senhas[p][caux][i]) + " ";
                 
                teste[5]=1;
            
            }
        }
        }



        

}
 }
    //std::cout<<crack;
    
    return crack;
    }