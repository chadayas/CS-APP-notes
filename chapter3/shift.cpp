#include<iostream>
#include<cstdint>

extern "C" long asmm(long a, long b){
   long res; 
   
   asm (
         "addl %%ebx, %%eax" 
         : "=a" (res) 
         : "a" (a), "b" (b)
      );
    
   return res;
}


extern "C" long branch(long x){
   if (x == 5){
      x = 1;
   } else{
      x = 0;
   }
   return x;
}
 


extern "C" uint64_t Mul_two_vals(uint64_t x, uint64_t y){
   uint64_t res {x * y};
   return res;
}

extern "C" long OR_two_vals(long x, long y){
   long res {x | y};
   return res;
}

extern "C" long XOR_two_vals(long x, long y){
   long res {x ^ y};
   return res;
}

int main(){
   long x{3}, y{4}; 
   auto m = asmm(x,y); 
   std::cout << m << std::endl; 
   return 0;
}
