
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int opcode_list(char machine[],char*opcode){
    int function;
            if(strcmp(opcode, "add") == 0){
                      strcat (machine,"100000");
                      function = 32;
              }
              else if(strcmp(opcode, "addu") == 0){
                      strcat (machine,"100001");
                      function = 33;
              }
              else if(strcmp(opcode, "and") == 0){
                      strcat (machine,"100100");
                      function = 36;
              }
              else if(strcmp(opcode, "jr") == 0){
                      strcat (machine,"001000");
                      function = 8;
              }
              else if(strcmp(opcode, "nor") == 0){
                      strcat (machine,"100111");
                      function = 39;
              }
              else if(strcmp(opcode, "or") == 0){
                      strcat (machine,"100101");
                      function = 37;
              }
              else if(strcmp(opcode, "slt") == 0){
                      strcat (machine,"101010");
                      function = 42;
              }
              else if(strcmp(opcode, "sltu") == 0){
                      strcat (machine,"101011");
                      function = 43;
              }
              else if(strcmp(opcode, "sll") == 0){
                      strcat (machine,"000000");
                      function = 0;
              }
              else if(strcmp(opcode, "srl") == 0){
                      strcat (machine,"000010");
                      function = 2;
              }
              else if(strcmp(opcode, "sub") == 0){
                      strcat (machine,"100010");
                      function = 34;
              }
              else if(strcmp(opcode, "subu") == 0){
                      strcat (machine,"100011");
                      function = 35;
              }
    return function;
}

int registers(char machine[],char* reg){
    int R;
                if(strcmp(reg, "zero") == 0 ){
                      strcat (machine,"00000");
                      R = 0;
              }
              else if(strcmp(reg, "at") == 0){
                      strcat (machine,"00001");
                      R = 1;
              }
              else if(strcmp(reg, "v0") == 0){
                      strcat (machine,"00010");
                      R = 2;
              }
              else if(strcmp(reg, "v1") == 0){
                      strcat (machine,"00011");
                      R = 3;
              }
              else if(strcmp(reg, "a0") == 0){
                      strcat (machine,"00100");
                      R = 4;
              }
              else if(strcmp(reg, "a1") == 0){
                      strcat (machine,"00101");
                      R = 5;
              }
              else if(strcmp(reg, "a2") == 0){
                      strcat (machine,"00110");
                      R = 6;
              }
              else if(strcmp(reg, "a3") == 0){
                      strcat (machine,"00111");
                      R = 7;
              }
              else if(strcmp(reg, "t0") == 0){
                      strcat (machine,"01000");
                      R = 8;
              }
              else if(strcmp(reg, "t1") == 0){
                      strcat (machine,"01001");
                      R = 9;
              }
              else if(strcmp(reg, "t2") == 0){
                      strcat (machine,"01010");
                      R = 10;
              }
              else if(strcmp(reg, "t3") == 0){
                      strcat (machine,"01011");
                      R = 11;
              }
              else if(strcmp(reg, "t4") == 0){
                      strcat (machine,"01100");
                      R = 12;
              }
              else if(strcmp(reg, "t5") == 0){
                      strcat (machine,"01101");
                      R = 13;
              }
              else if(strcmp(reg, "t6") == 0){
                      strcat (machine,"01110");
                      R = 14;
              }
              else if(strcmp(reg, "t7") == 0){
                      strcat (machine,"01111");
                      R = 15;
              }
              else if(strcmp(reg, "s0") == 0){
                      strcat (machine,"10000");
                      R = 16;
              }
              else if(strcmp(reg, "s1") == 0){
                      strcat (machine,"10001");
                      R = 17;
              }
              else if(strcmp(reg, "s2") == 0){
                      strcat (machine,"10010");
                      R = 18;
              }
              else if(strcmp(reg, "s3") == 0){
                      strcat (machine,"10011");
                      R = 19;
              }
              else if(strcmp(reg, "s4") == 0){
                      strcat (machine,"10100");
                      R = 20;
              }
              else if(strcmp(reg, "s5") == 0){
                      strcat (machine,"10101");
                      R = 21;
              }
              else if(strcmp(reg, "s6") == 0){
                      strcat (machine,"10110");
                      R = 22;
              }
              else if(strcmp(reg, "s7") == 0){
                      strcat (machine,"10111");
                      R = 23;
              }
              else if(strcmp(reg, "t8") == 0){
                      strcat (machine,"11000");
                      R = 24;
              }
              else if(strcmp(reg, "t9") == 0){
                      strcat (machine,"11001");
                      R = 25;
              }
              else if(strcmp(reg, "k0") == 0){
                      strcat (machine,"11010");
                      R = 26;
              }
              else if(strcmp(reg, "k1") == 0){
                      strcat (machine,"11011");
                      R = 27;
              }
              else if(strcmp(reg, "gp") == 0){
                      strcat (machine,"11100");
                      R = 28;
              }
              else if(strcmp(reg, "sp") == 0){
                      strcat (machine,"11101");
                      R = 29;
              }
              else if(strcmp(reg, "fp") == 0){
                      strcat (machine,"11110");
                      R = 30;
              }
              else if(strcmp(reg, "ra") == 0){
                      strcat (machine,"11111");
                      R = 31;
              }
              else {
                   strcat (machine,"00000");
                      R = 0;
              }
              
              return R;
}

bool immediates (char machine[],char* reg){
    bool found = false;
                    if(strcmp(reg, "0") == 0){
                      strcat (machine,"00000");
                      found = true;
              }
              else if(strcmp(reg, "1") == 0){
                      strcat (machine,"00001");
                      found = true;
              }
              else if(strcmp(reg, "2") == 0){
                      strcat (machine,"00010");
                      found = true;
              }
              else if(strcmp(reg, "3") == 0){
                      strcat (machine,"00011");
                      found = true;
              }
              else if(strcmp(reg, "4") == 0){
                      strcat (machine,"00100");
                      found = true;
              }
              else if(strcmp(reg, "5") == 0){
                      strcat (machine,"00101");
                      found = true;
              }
              else if(strcmp(reg, "6") == 0){
                      strcat (machine,"00110");
                      found = true;
              }
              else if(strcmp(reg, "7") == 0){
                      strcat (machine,"00111");
                      found = true;
              }
              else if(strcmp(reg, "8") == 0){
                      strcat (machine,"01000");
                      found = true;
              }
              else if(strcmp(reg, "9") == 0){
                      strcat (machine,"01001");
                      found = true;
              }
              else if(strcmp(reg, "10") == 0){
                      strcat (machine,"01010");
                      found = true;
              }
              else if(strcmp(reg, "11") == 0){
                      strcat (machine,"01011");
                      found = true;
              }
              else if(strcmp(reg, "12") == 0){
                      strcat (machine,"01100");
                      found = true;
              }
              else if(strcmp(reg, "13") == 0){
                      strcat (machine,"01101");
                      found = true;
              }
              else if(strcmp(reg, "14") == 0){
                      strcat (machine,"01110");
                      found = true;
              }
              else if(strcmp(reg, "15") == 0){
                      strcat (machine,"01111");
                      found = true;
              }
              else if(strcmp(reg, "16") == 0){
                      strcat (machine,"10000");
                      found = true;
              }
              else if(strcmp(reg, "17") == 0){
                      strcat (machine,"10001");
                      found = true;
              }
              else if(strcmp(reg, "18") == 0){
                      strcat (machine,"10010");
                      found = true;
              }
              else if(strcmp(reg, "19") == 0){
                      strcat (machine,"10011");
                      found = true;
              }
              else if(strcmp(reg, "20") == 0){
                      strcat (machine,"10100");
                      found = true;
              }
              else if(strcmp(reg, "21") == 0){
                      strcat (machine,"10101");
                      found = true;
              }
              else if(strcmp(reg, "22") == 0){
                      strcat (machine,"10110");
                      found = true;
              }
              else if(strcmp(reg, "23") == 0){
                      strcat (machine,"10111");
                      found = true;
              }
              else if(strcmp(reg, "24") == 0){
                      strcat (machine,"11000");
                      found = true;
              }
              else if(strcmp(reg, "25") == 0){
                      strcat (machine,"11001");
                      found = true;
              }
              else if(strcmp(reg, "26") == 0){
                      strcat (machine,"11010");
                      found = true;
              }
              else if(strcmp(reg, "27") == 0){
                      strcat (machine,"11011");
                      found = true;
              }
              else if(strcmp(reg, "28") == 0){
                      strcat (machine,"11100");
                      found = true;
              }
              else if(strcmp(reg, "29") == 0){
                      strcat (machine,"11101");
                      found = true;
              }
              else if(strcmp(reg, "30") == 0){
                      strcat (machine,"11110");
                      found = true;
              }
              else if(strcmp(reg, "31") == 0){
                      strcat (machine,"11111");
                      found = true;
              }
              return found;
}

int main()
{
       char string[20];
       char machine[32];
       char* opcode = 0;
       char* mod = 0;
       char* rs = 0;
       char* rt = 0;
       char* rd = 0;
       int reg_number = 0;
       int Func_number = 0;
       bool reg_condition = false; 
       bool shift = false;
       bool jr = false;
        
   fgets(string, sizeof(string),stdin);

   char next_item[2] = ", ";
   int i = 10;
   int j = 0;
   
   mod = strtok(string, " ");
   strcpy(machine,"000000");
   
   while(mod != NULL){
       if(j != 4 || jr == false){
           j++;
           if(j ==1){
              opcode = mod;
              //printf("%i\n", strlen(opcode));
              if(strcmp(opcode, "srl") == 0 || strcmp(opcode, "sll") == 0){
                shift = true;
              }
           }
           else if(j ==2){
              rd = mod; 
            if(strlen(opcode) == 2){
                rs = rd;
                rd = "0";
                rt = "0";
                rs[strlen(rs) - 1] = 0;
                   printf("Operation: "); 
                    printf("%s\n", opcode);
                    printf("Rs: ");
                    printf("%s", rs);
                    printf(" (R"); 
                    reg_number = registers(machine,rs);
                    printf("%i",reg_number);
                    printf(")\n");
                    printf("Rt: ");
                    printf("%s", rt);
                    printf(" (R"); 
                    printf("0");
                    printf(")\n");
                    printf("%s","Rd: ");
                    printf("%s", rd);
                    printf(" (R"); 
                    printf("0");
                    printf(")\n");   
                    printf("Shamt: 0\n");
                    strcat (machine,"000000000000000");
                    break;
              }
           }
           else if(j ==3){
              rs = mod; 
           }
           else if(j ==4){
              rt = mod; 
              rt[strlen(rt) - 1] = 0;
              i = 0;
           }
       }
       
       if(i == 0){
           printf("Operation: "); 
           printf("%s\n", opcode);
           i++;
       }
        if(i == 1){
           printf("Rs: ");
           printf("%s", rs);
           i++;
           reg_number = registers(machine,rs);
            
           printf(" (R"); 
           printf("%i",reg_number);
           printf(")\n");
       }
       if (i == 2){
            printf("Rt: ");
            printf("%s", rt);
           i++;
           if(shift == false){
               reg_number = registers(machine, rt);
               printf(" (R"); 
               printf("%i",reg_number);
               printf(")\n");
               reg_condition = true;
           }
           else{
               reg_number = registers(machine, rt);
               immediates(machine, rt);
                
           }
       }
       if(i == 3){
            printf("%s","Rd: ");
            printf("%s", rd);
           reg_number = registers(machine,rd);
        i++;
           
            printf(" (R"); 
            printf("%i",reg_number);
            printf(")\n");                
               
       }
       
                      
        if(i == 4){

            if(shift == false){
                strcat (machine,"00000");
                printf("Shamt: ");
               // printf("%i",);
                printf("0\n" );
            }
            else{
                printf("Shamt: ");
                printf("%s\n", rt);
                //printf(")\n");
                reg_condition = immediates(machine, rt);
            }
        }
           mod = strtok(NULL, ", ");
   }
   Func_number = opcode_list(machine, opcode);
   printf("Function: %i\n", Func_number);
    printf("MachineCode: ");
    printf("%s", machine);
    
    
    return 0;
}
