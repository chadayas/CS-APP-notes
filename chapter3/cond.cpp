

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
   } else if(x == 1){
      return 1;
   } else{ 
      x = 15;
      return x;
   }
}

extern "C" short overflow(short x, short y){
   short res, temp;
   res = x+y;
   temp = res;
   return res;
}

int main(){
   int res; 
   res = if_check(12);

}
