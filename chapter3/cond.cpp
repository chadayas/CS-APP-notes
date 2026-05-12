

extern "C" short asm_overflow(short x, short y){
   short res;  
   asm (
         "addw %%bx, %%ax" 
         : "=a" (res) 
         : "a" (x), "b" (y)
      );
   return res; 
}

extern "C" int if_check(int x ){
   if (x == 0){
      return 0;
   } else 
      return 1;
}

extern "C" short overflow(short x, short y){
   short res, temp;
   res = x+y;
   temp = res;
   return res;
}

int main(){
   short x{32767}, y{1}, res; 
   res = asm_overflow(x,y);
}
