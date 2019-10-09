#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int opcode(char Machine_Code[], char* opcode_num){
    
    //mips cheat sheet on catcourses
        
    int function = 0;
    
        if(strcmp(opcode_num, "add" == 0)){
            
            strcat(Machine_Code, "100000");
            function = 32;
            
        }
        else if(strcmp(opcode_num, "addu" == 0)){
            
            strcat(Machine_Code. "100001");
            function = 33;
            
        }
        else if(strcmp(opcode_num, "and" == 0)){
            
            strcat(Machine_Code. "100100");
            function = 36;
            
        }
        else if(strcmp(opcode_num, "jr" == 0)){
            
            strcat(Machine_Code. "001000");
            function = 8;
            
        }
        else if(strcmp(opcode_num, "nor" == 0)){
            
            strcat(Machine_Code. "100111");
            function = 39;
            
        }
        else if(strcmp(opcode_num, "or" == 0)){
            
            strcat(Machine_Code. "100101");
            function = 37;
            
        }
        else if(strcmp(opcode_num, "slt" == 0)){
            
            strcat(Machine_Code. "101010");
            function = 42;
            
        }
        else if(strcmp(opcode_num, "sltu" == 0)){
            
            strcat(Machine_Code. "101011");
            function = 43;
            
        }
        else if(strcmp(opcode_num, "sll" == 0)){
            
            strcat(Machine_Code. "000000");
            function = 0;
            
        }
        else if(strcmp(opcode_num, "srl" == 0)){
            
            strcat(Machine_Code. "000010");
            function = 2;
            
        }
        else if(strcmp(opcode_num, "sub" == 0)){
            
            strcat(Machine_Code. "100010");
            function = 34;
            
        }
        else if(strcmp(opcode_num, "subu" == 0)){
            
            strcat(Machine_Code. "100011");
            function = 35;
            
        }
        
    return function;
    
}

int registers(char Machine_Code[], char* register_chosen){
    
    //mips cheat sheet on catcourses
    
    int register_num = 0;
    
        if(strcmp(register_chosen, "zero") == 0){
            
            strcat(Machine_Code, "00000");
            register_num = 0;
            
        }
        else if(strcmp(register_chosen, "at") == 0){
            
            strcat(Machine_Code, "00001");
            register_num = 1;
            
        }
        else if(strcmp(register_chosen, "v0") == 0){
            
            strcat(Machine_Code, "00010");
            register_num = 2;
            
        }
        else if(strcmp(register_chosen, "v1") == 0){
            
            strcat(Machine_Code, "00011");
            register_num = 3;
            
        }
        else if(strcmp(register_chosen, "a0") == 0){
            
            strcat(Machine_Code, "00100");
            register_num = 4;
            
        }
        else if(strcmp(register_chosen, "a1") == 0){
            
            strcat(Machine_Code, "00101");
            register_num = 5;
            
        }
        else if(strcmp(register_chosen, "a2") == 0){
            
            strcat(Machine_Code, "00110");
            register_num = 6 ;
            
        }
        else if(strcmp(register_chosen, "a3") == 0){
            
            strcat(Machine_Code, "00111");
            register_num = 7;
            
        }
        else if(strcmp(register_chosen, "t0") == 0){
            
            strcat(Machine_Code, "01000");
            register_num = 8;
            
        }
        else if(strcmp(register_chosen, "t1") == 0){
            
            strcat(Machine_Code, "01001");
            register_num = 9;
            
        }
        else if(strcmp(register_chosen, "t2") == 0){
            
            strcat(Machine_Code, "01010");
            register_num = 10;
            
        }
        else if(strcmp(register_chosen, "t3") == 0){
            
            strcat(Machine_Code, "01011");
            register_num = 11;
            
        }
        else if(strcmp(register_chosen, "t4") == 0){
            
            strcat(Machine_Code, "01100");
            register_num = 12;
            
        }
        else if(strcmp(register_chosen, "t5") == 0){
            
            strcat(Machine_Code, "01101");
            register_num = 13;
            
        }
        else if(strcmp(register_chosen, "t6") == 0){
            
            strcat(Machine_Code, "01110");
            register_num = 14;
            
        }
        else if(strcmp(register_chosen, "t7") == 0){
            
            strcat(Machine_Code, "01111");
            register_num = 15;
            
        }
        else if(strcmp(register_chosen, "s0") == 0){
            
            strcat(Machine_Code, "10000");
            register_num = 16;
            
        }
        else if(strcmp(register_chosen, "s1") == 0){
            
            strcat(Machine_Code, "10001");
            register_num = 17;
            
        }
        else if(strcmp(register_chosen, "s2") == 0){
            
            strcat(Machine_Code, "10010");
            register_num = 18;
            
        }
        else if(strcmp(register_chosen, "s3") == 0){
            
            strcat(Machine_Code, "10011");
            register_num = 19;
            
        }
        else if(strcmp(register_chosen, "s4") == 0){
            
            strcat(Machine_Code, "10100");
            register_num = 20;
            
        }
        else if(strcmp(register_chosen, "s5") == 0){
            
            strcat(Machine_Code, "10101");
            register_num = 21;
            
        }
        else if(strcmp(register_chosen, "s6") == 0){
            
            strcat(Machine_Code, "10110");
            register_num = 22;
            
        }
        else if(strcmp(register_chosen, "s7") == 0){
            
            strcat(Machine_Code, "10111");
            register_num = 23;
            
        }
        else if(strcmp(register_chosen, "t8") == 0){
            
            strcat(Machine_Code, "11000");
            register_num = 24;
            
        }
        else if(strcmp(register_chosen, "t9") == 0){
            
            strcat(Machine_Code, "11001");
            register_num = 25;
            
        }
        else if(strcmp(register_chosen, "k0") == 0){
            
            strcat(Machine_Code, "11010");
            register_num = 26;
            
        }
        else if(strcmp(register_chosen, "k1") == 0){
            
            strcat(Machine_Code, "11011");
            register_num = 27;
            
        }
        else if(strcmp(register_chosen, "gp") == 0){
            
            strcat(Machine_Code, "11100");
            register_num = 28;
            
        }
        else if(strcmp(register_chosen, "sp") == 0){
            
            strcat(Machine_Code, "11101");
            register_num = 29;
            
        }
        else if(strcmp(register_chosen, "fp") == 0){
            
            strcat(Machine_Code, "11110");
            register_num = 30;
            
        }
        else if(strcmp(register_chosen, "ra") == 0){
            
            strcat(Machine_Code, "11111");
            register_num = 31;
            
        }
        else{
            
            strcat(Machine_Code, "00000");
            register_num = 0;
            
        }
        
    return register_num;
    
}

bool immediates (char Machine_Code[], char* register_chosen){
    
    bool exist = false;
    
        if(strcmp(register_chosen, "0") == 0){
            
            strcat(Machine_Code, "00000");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "1") == 0){
            
            strcat(Machine_Code, "00001");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "2") == 0){
            
            strcat(Machine_Code, "00010");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "3") == 0){
            
            strcat(Machine_Code, "00011");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "4") == 0){
            
            strcat(Machine_Code, "00100");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "5") == 0){
            
            strcat(Machine_Code, "00101");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "6") == 0){
            
            strcat(Machine_Code, "00110");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "7") == 0){
            
            strcat(Machine_Code, "00111");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "8") == 0){
            
            strcat(Machine_Code, "01000");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "9") == 0){
            
            strcat(Machine_Code, "01001");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "10") == 0){
            
            strcat(Machine_Code, "01010");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "11") == 0){
            
            strcat(Machine_Code, "01011");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "12") == 0){
            
            strcat(Machine_Code, "01100");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "13") == 0){
            
            strcat(Machine_Code, "01101");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "14") == 0){
            
            strcat(Machine_Code, "01110");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "15") == 0){
            
            strcat(Machine_Code, "01111");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "16") == 0){
            
            strcat(Machine_Code, "10000");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "17") == 0){
            
            strcat(Machine_Code, "10001");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "18") == 0){
            
            strcat(Machine_Code, "10010");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "19") == 0){
            
            strcat(Machine_Code, "10011");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "20") == 0){
            
            strcat(Machine_Code, "10100");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "21") == 0){
            
            strcat(Machine_Code, "10101");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "22") == 0){
            
            strcat(Machine_Code, "10110");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "23") == 0){
            
            strcat(Machine_Code, "10111");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "24") == 0){
            
            strcat(Machine_Code, "11000");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "25") == 0){
            
            strcat(Machine_Code, "11001");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "26") == 0){
            
            strcat(Machine_Code, "11010");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "27") == 0){
            
            strcat(Machine_Code, "11011");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "28") == 0){
            
            strcat(Machine_Code, "11100");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "29") == 0){
            
            strcat(Machine_Code, "11101");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "30") == 0){
            
            strcat(Machine_Code, "11110");
            exist = true;
            
        }
        else if(strcmp(register_chosen, "31") == 0){
            
            strcat(Machine_Code, "11111");
            exist = true;
            
        }
        
    return exist;
    
}

int main()
{
    
    char MipsCode[30];
    int init_size = strlen(MipsCode);
    char delim[] = " ";

    printf("Enter Mips Code: ");

    fgets(MipsCode, sizeof(MipsCode), stdin);

    printf("Mips Code: %s\n", MipsCode);
    
     char *ptr = strtok(MipsCode, delim);


    while(ptr != NULL){
    
        
        ptr = strtok(NULL, delim);

    }


    return 0;
}
